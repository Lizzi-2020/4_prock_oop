#pragma once
#include "transport.h"
class Node
{
public:
	Transport* data;
	Node *next; //указатель на следующий элемент
	//Node getNext() { return *next; }
	void In(ifstream &ifst); // ввод фигур
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод фигур
	//virtual void Out(ofstream &ofst) = 0; // вывод
};