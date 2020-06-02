#include "container.h"	
void Container::In(ifstream &ifst) {
	while (!ifst.eof()) {
		Node* a = new Node;
		a->data = Transport::In(ifst);
		data++;
		if (head == NULL)
		{
			endList = a;
			head = a;
			a->next = NULL;
			noda = a;
		}
		else
		{
			a->next = NULL;
			endList->next = a;
			endList = a;
		}
	}
}