#pragma once
#include "node.h"
class Container {
	Node* noda = new Node;
	Node *head = NULL;
	Node *endList = NULL;
	int data = 0; // ������� �����
public:
	int GetData() { return data; }
	Node *GetHead() { return head; }
	Node GetEndList() { return *endList; }
	void In(ifstream &ifst); // ���� �����
	void Out(ofstream &ofst); // ����� �����
	void OutTruck(ofstream &ofst);
	void Ratio(ofstream &ofst);
	void Clear(); // ������� ���������� �� �����
	void Sort();
	//
	void MultiMethod(ofstream &ofst);
	//Container(); // ������������� ����������
	//~Container() { Clear(); } // ���������� ����������
};