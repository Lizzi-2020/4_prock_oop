#pragma once
#include "transport.h"
class Node
{
public:
	Transport* data;
	Node *next; //��������� �� ��������� �������
	//Node getNext() { return *next; }
	void In(ifstream &ifst); // ���� �����
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // ����� �����
	//virtual void Out(ofstream &ofst) = 0; // �����
};