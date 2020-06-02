#include "container.h"
void Container::Clear() {
	Node *time = new Node;
	Node *timeTwo = new Node;
	if (head != NULL)
	{
		timeTwo = head;
		while (true)
		{
			time = timeTwo->next;
			delete timeTwo;
			timeTwo = time;
			if (timeTwo == NULL)
			{
				break;
			}
		}
	}
}