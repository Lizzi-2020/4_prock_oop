#include "Container.h"
#include "transport.h"
void Container::Out(ofstream &ofst)
{
	ofst << "Container contents " << data
		<< " elements." << endl;
	ofst << "-|" << endl;
	Node* a = head;
	for (int i = 0; i < data; i++) {
		//noda->data->OutTruck(ofst); // only trucks
		a->data->Out(ofst);
		
		ofst << "-|" << endl;
		a = a->next;
	}

}