#include "container.h"
#include "transport.h"
void Container::MultiMethod(ofstream &ofst) {
	ofst << "Multimethod." << endl;
	//transport* time = head->data;
	//transport* time2 = head->next->data;
	Node* time = head;
	Node* time2 = head;
	for (int i = 0; i < data -1 ; i++) {//for (int i = 0; time != NULL; i++) {
		for (int j = i + 1; j < data; j++) {//for (int j = i + 1; time2 != NULL; j++) {
			time2 = time2->next;

			time->data->MultiMethod(time2->data, ofst);
			time->data->Out(ofst);
			time2->data->Out(ofst);
		}
		time = time->next;
		time2 = time;
	}
}
////////