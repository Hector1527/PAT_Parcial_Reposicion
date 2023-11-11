#include "Ejercicio03.h"

Node<int>* Ejercicio03::detectCycle(Node<int>* head)
{
	Node<int>* slow = head;
	Node<int>* fast = head;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast)
			return slow->next;
	}
	return nullptr;
}
