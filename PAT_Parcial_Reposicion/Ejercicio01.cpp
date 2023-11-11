#include "Ejercicio01.h"

//Node<int>* addTwoNumbersHelper(Node<int>* num1, Node<int>* num2, int sizeL1, int sizeL2, int& acarreo)
//{
//    if (sizeL1 == 0 && sizeL2 == 0 && acarreo == 0)
//        return 0;
//
//    int valor1 = 0;
//    int valor2 = 0; 
//
//    if (num1 && num2)
//    {
//        valor1 = num1->value;
//        valor2 = num2->value;
//    }
//    int sum = valor1 + valor2 + acarreo;
//    acarreo = sum / 10;
//
//    Node<int>* result = new Node<int>();
//    result->value = sum % 10;
//
//    if (num1)
//        num1 = num1->next;
//    if (num2)
//        num2 = num2->next;
//
//    result->next = addTwoNumbersHelper(num1, num2, sizeL1 - 1, sizeL2 - 1, acarreo);
//
//    return result;
//}

Node<int>* Ejercicio01::addTwoNumbers(Node<int>* l1, int sizeL1, Node<int>* l2, int sizeL2)
{
    //int acarreo = 0;
    //return addTwoNumbersHelper(l1, l2, sizeL1, sizeL2, acarreo);
    return nullptr;
}
