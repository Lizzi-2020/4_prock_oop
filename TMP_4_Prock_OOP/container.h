#pragma once
#include "node.h"
class Container {
	Node* noda = new Node;
	Node *head = NULL;
	Node *endList = NULL;
	int data = 0; // текущая длина
public:
	int GetData() { return data; }
	Node *GetHead() { return head; }
	Node GetEndList() { return *endList; }
	void In(ifstream &ifst); // ввод фигур
	void Out(ofstream &ofst); // вывод фигур
	void OutTruck(ofstream &ofst);
	void Ratio(ofstream &ofst);
	void Clear(); // очистка контейнера от фигур
	void Sort();
	//
	void MultiMethod(ofstream &ofst);
	//Container(); // инициализация контейнера
	//~Container() { Clear(); } // утилизация контейнера
};