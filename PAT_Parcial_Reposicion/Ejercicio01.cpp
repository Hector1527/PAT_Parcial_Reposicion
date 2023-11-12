#include "Ejercicio01.h"

class Pila
{
private:
	struct Nodo
	{
		int value;
		Nodo* next;
		Nodo(int num) : value(num), next(nullptr) {}
	};
	Nodo* head = nullptr;
public:
	void push(int num)
	{
		Nodo* newnodo = new Nodo(num);
		newnodo->next = head;
		head = newnodo;
	}

	int pop()
	{

		if (isempty())
		{
			return 0;
		}

		Nodo* nodo = head;
		int valor = nodo->value;
		head = head->next;

		delete nodo;
		return valor;
	}

	int front()
	{
		return head->value;
	}

	bool isempty()
	{
		return head == nullptr;
	}
};

Node<int>* Ejercicio01::addTwoNumbers(Node<int>* l1, int sizeL1, Node<int>* l2, int sizeL2)
{
	Pila coladenum1, coladenum2;
	Node<int>* result = nullptr;
	int acarreo = 0;
	int suma = 0;

	while (l1 != nullptr)
	{
		coladenum1.push(l1->value);
		l1 = l1->next;
	}

	while (l2 != nullptr)
	{
		coladenum2.push(l2->value);
		l2 = l2->next;
	}

	while (!coladenum1.isempty() || !coladenum2.isempty() || acarreo)
	{
		suma = acarreo;
		if (!coladenum1.isempty())
		{
			suma += coladenum1.pop();
		}
		if (!coladenum2.isempty())
		{
			suma += coladenum2.pop();
		}

		acarreo = suma / 10;

		Node<int>* newnodo = new Node<int>{suma % 10, result};
		result = newnodo;
	}

	return result;
}
