#include <iostream>
#include <fstream>
using namespace std;
#include "Container.h"

int main(int argc, char* argv[]) {
	cout << argc << endl;
	setlocale(LC_CTYPE, "rus");
	if (argc != 3)
	{
		cout << "Wrong command line arguments\n";
		system("pause");
		return 1;
	}
	std::cout << "Hello World!\n";


	ifstream ifst(argv[1]);
	if (!ifst.is_open())
	{
		std::cerr << "Не корректный входной файл!\n";
		exit(1);
	}

	ofstream ofst(argv[2]);
	if (!ofst.is_open())
	{
		std::cerr << "Не корректный выходной файл!\n";
		exit(1);
	}

	cout << "Start" << endl;
	Container c;
	c.In(ifst);
	c.Sort();
	c.MultiMethod(ofst);
	//c.Out(ofst);
	//c.OutTruck(ofst);
	ifst.close();
	ofst.close();
	c.Clear();
	//system("pause");
	//This is for false commit!!!
	return 0;
}
