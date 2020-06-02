#include "container.h"
void Container::Sort() {
	Node* fir = head;
	Node* sec = head->next;
	Node* tmp = new Node;
	while (fir->next)
	{
		while (sec)
		{
			if (fir->data->Compare(*sec->data))
			{
				/*Node* time2 = fir->next->next;
				Node* time = fir;*/
				tmp->data = fir->data;
				fir->data = sec->data;
				sec->data = tmp->data;
			}
			sec = sec->next;
		}
		fir = fir->next;
		sec = fir->next;
	}
}
