#include "container.h"
#include "transport.h"
void Container::OutTruck(ofstream &ofst)
{
	ofst << "Only truck " << 
		"." << endl;
	
	for (int i = 0; i < data; i++) {
		noda->data->OutTruck(ofst);
		
		noda = noda->next;
	}

}