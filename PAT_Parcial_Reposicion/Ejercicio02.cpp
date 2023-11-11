#include "Ejercicio02.h"

Node<char>* Ejercicio02::reverseKGroup(Node<char>* head, int k)
{
    if (!head || k <= 1) {
        return head;
    }

    Node<char>* nodo = new Node<char>; 
    nodo->next = head;

    Node<char>* prevprev = nodo;
    Node<char>* prev = nullptr;
    Node<char>* temp = nullptr;

    Node<char>* slow = head;
    Node<char>* fast = head;
    int count = 0;
    while (fast && fast->next) {
        count += 2;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != nullptr)
        count++;

    while (count >= k) {
        prev = prevprev->next;
        temp = prev->next;

        for (int i = 1; i < k; i++)
        {
            prev->next = temp->next;
            temp->next = prevprev->next;
            prevprev->next = temp;
            temp = prev->next;
        }

        prevprev = prev;
        count -= k;
    }

    return nodo->next;
}
