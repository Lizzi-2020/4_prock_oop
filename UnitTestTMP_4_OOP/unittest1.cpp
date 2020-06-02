#include "stdafx.h"
#include "CppUnitTest.h"
#include "../TMP_4_Prock_OOP/bus.h"
#include "../TMP_4_Prock_OOP/truck.h"
#include "../TMP_4_Prock_OOP/car.h"
#include "../TMP_4_Prock_OOP/container.h"
#include "../TMP_4_Prock_OOP/node.h"
#include "../TMP_4_Prock_OOP/transport.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTMP_4_OOP
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestInBus)// Пришлось добавить в <<bus>> метод "GetSize"
		{
			ifstream in("testInBus.txt");
			Bus b;
			b.InData(in);
			int actual = b.GetSize();
			int expected = 55;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestInTruck)// Пришлось добавить метод "GetPower"
		{
			ifstream in("testInTruck.txt");
			Truck t;
			t.InData(in);
			int actual = t.GetPower();
			int expected = 100;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestInCar)// Пришлось добавить метод "GetMaxSpeed"
		{
			ifstream in("testInCar.txt");
			Car c;
			c.InData(in);
			int actual = c.GetMaxSpeed();
			int expected = 170;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestInCommon)// Пришлось добавить в "transport.h" метод "GetFuelConsumption"
		{
			ifstream in("testInCommon.txt");
			Bus b;
			b.InData(in);
			int actual1 = b.GetPowerEngine();
			int expected1 = 112;
			Assert::AreEqual(expected1, actual1);

			double actual2 = b.GetFuelConsumption();
			double expected2 = 113;
			Assert::AreEqual(expected2, actual2);
		}

		TEST_METHOD(TestInContainer)// Добавил в "container.h" пару методов! Правильно ли проверяю ссылки, через параметры? 
		{
			ifstream in("testInContainer.txt");
			Container a;
			a.In(in);

			Node * time = a.GetHead();
			int actual1 = time->data->GetFuelConsumption();
			int expected1 = 111;
			Assert::AreEqual(expected1, actual1);

			int actual2 = a.GetEndList().data->GetFuelConsumption();
			int expected2 = 333;
			Assert::AreEqual(expected2, actual2);
		}

		TEST_METHOD(TestBusRatio)
		{
			ifstream in("testRatioBus.txt");
			Bus b;
			b.InData(in);

			int actual = b.Ratio();
			int expected = 75;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestTruckRatio)
		{
			ifstream in("testRatioTruck.txt");
			Car c;
			c.InData(in);

			int actual = c.Ratio();
			int expected = 3;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestCarRatio)
		{
			ifstream in("testRatioCar.txt");
			Truck t;
			t.InData(in);

			int actual = t.Ratio();
			int expected = 2;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSortList)// Ну даж не знаю, получилось сравнить всего 2 параметра 
		{
			ifstream ifst("In.txt");
			Container test;
			test.In(ifst);

			ifstream in("TestSortList.txt");
			Container c;
			c.In(in);
			c.Sort();
			Node *index1, *index2;
			if (test.GetData() == c.GetData())
			{
				index1 = c.GetHead();
				index2 = test.GetHead();
				for (size_t i = 0; i < test.GetData(); i++)
				{
					//Assert::AreEqual(index1->data->b, index2->data->b);
					Assert::AreEqual(index1->data->GetFuelConsumption(), index2->data->GetFuelConsumption());
					Assert::AreEqual(index1->data->GetPowerEngine(), index2->data->GetPowerEngine());
					//Assert::AreEqual(index1->, index2->data);
					index1 = index1->next;
					index2 = index2->next;

				}
			}
		}

		TEST_METHOD(TestOnlyTruckOut)// Не знаю как реализовать проверку 
		{


			/*ifstream inn("TestInOnlyTruck.txt");
			List c;
			In(c, inn);
			inn.close();

			ofstream Out("TestOutOnlyTruck.txt");
			OutTruck(c, Out);
			Out.close();

			ifstream trueFile("TestOutOnlyTruckTrueFile.txt");
			string expected;
			char temp;
			trueFile.unsetf(ios::skipws);
			while (trueFile >> temp)
				expected += temp;

			ifstream testFile("TestOutOnlyTruck.txt");
			string actual;
			char temp1;
			testFile.unsetf(ios::skipws);
			while (testFile >> temp1)
				actual += temp1;

			Assert::AreEqual(expected, actual);*/

			//////////////////////

			ifstream in("TestInOnlyTruck.txt");
			Container a;
			a.In(in);

			ofstream outTr("TestOutOnlyTruck.txt");
			a.OutTruck(outTr);

			ifstream trueFile("TestOutOnlyTruckTrueFile.txt");
			string expected;
			char temp;
			trueFile.unsetf(ios::skipws);
			while (trueFile >> temp)
				expected += temp;

			ifstream testFile("TestOutOnlyTruck.txt");
			string actual;
			char temp1;
			testFile.unsetf(ios::skipws);
			while (testFile >> temp1)
				actual += temp1;

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestCompare)
		{
			ifstream in("TestCompare.txt");
			Container a;
			a.In(in);
			Node *fir = a.GetHead();
			Node *sec = fir->next;
			bool actual = fir->data->Compare(*sec->data);
			Assert::AreEqual(false, actual);
		}

		TEST_METHOD(TestOutBus)
		{
			ifstream in("TestOutBus1.txt");
			Container a;
			a.In(in);
			in.close();

			ofstream ou("TestOutBus2.txt");
			a.Out(ou);
			ou.close();

			ifstream ina("TestOutBus2.txt");
			string actual;
			char temp;
			ina.unsetf(ios::skipws);
			while (ina >> temp)
				actual += temp;
			string expected = "Container contents 1 elements.\n-|\nIt is bus: Size = 75, Power engine = 75, Fuel consumption = 75/100km\nRatio = 75\n-|\n";// добавляю в конец и начало ожидаемой строки по пробелу, особенность считывания!
			Assert::AreEqual(expected, actual);

			//while (!ina.eof()) {
			//	string q;
			//	ina >> q;
			//	actual = actual + q;// кривое считывание, получается два лишних пробела (в начале и в конце)
			//}
		}

		TEST_METHOD(TestOutTruck)
		{
			ifstream in("TestOutTruck1.txt");
			Container a;
			a.In(in);
			in.close();

			ofstream ou("TestOutTruck2.txt");
			a.Out(ou);
			ou.close();

			ifstream ina("TestOutTruck2.txt");
			string actual;
			char temp;
			ina.unsetf(ios::skipws);
			while (ina >> temp)
				actual += temp;
			string expected = "Container contents 1 elements.\n-|\nIt is Truck: Power = 22, Power engine = 222, Fuel consumption = 2222/100km\nRatio = 0\n-|\n";// добавляю в конец и начало ожидаемой строки по пробелу, особенность считывания!
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestOutCar)
		{
			ifstream in("TestOutCar1.txt");
			Container a;
			a.In(in);
			in.close();

			ofstream ou("TestOutCar2.txt");
			a.Out(ou);
			ou.close();

			ifstream ina("TestOutCar2.txt");
			string actual;
			char temp;
			ina.unsetf(ios::skipws);
			while (ina >> temp)
				actual += temp;
			string expected = "Container contents 1 elements.\n-|\nIt is car: Max speed = 333, Power engine = 3, Fuel consumption = 111/100km\nRatio = 111\n-|\n";// добавляю в конец и начало ожидаемой строки по пробелу, особенность считывания!
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestCommon)
		{
			ifstream in("TestOutCommon1.txt");
			Container a;
			a.In(in);
			in.close();

			ofstream ou("TestOutCommon2.txt");
			Node *tem = a.GetHead();
			tem->data->OutCommon(ou);
			ou.close();

			ifstream ina("TestOutCommon2.txt");
			string actual;
			char temp;
			ina.unsetf(ios::skipws);
			while (ina >> temp)
				actual += temp;
			string expected = ", Power engine = 75, Fuel consumption = 75/100km\nRatio = 75\n";// добавляю в конец и начало ожидаемой строки по пробелу, особенность считывания!
			Assert::AreEqual(expected, actual);
		}


		/*string actual;
		char temp;
		ina.unsetf(ios::skipws);
		while (ina >> temp)
			actual += temp;*/

	};
}