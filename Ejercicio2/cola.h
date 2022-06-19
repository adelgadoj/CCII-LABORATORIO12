#include <iostream>
#include "nodo.h"
using namespace std;
class cola
{
private:
    Nodo *primero;
    Nodo *ultimo;
    int size;
public:
    cola();
    ~cola();
    void push(int);
    void remove();
    int getSize();
    void print();
};
cola::cola()
{
    primero = nullptr;
    ultimo = nullptr;
    size = 0;
}
cola::~cola()
{
    Nodo *aux = primero;
    while (primero != nullptr)
    {
        aux = primero->getNext();
        delete primero;
        primero = aux;
    }
}
void cola::push(int _dato)
{
    Nodo *temp = new Nodo(_dato);
    Nodo *aux = primero;
    if (primero == nullptr)
    {
        primero = temp;
        ultimo = temp;
    }
    else
    {
        while (aux->getNext() != nullptr)
        {
            aux = aux->getNext();
        }
        aux->setNext(temp);
        ultimo = aux;
    }
    size++;
}
void cola::print()
{
    Nodo *aux = primero;
    while (aux)
    {
        cout << aux->getDato() << " ";
        aux = aux->getNext();
    }
    cout << endl;
}
int cola::getSize()
{
    return size;
}
void cola::remove()
{
    Nodo *aux = primero;
    if (primero == nullptr)
    {
        cout << "##Lista vacia##" << endl;
        system("pause");
        return;
    }
    else
    {
        Nodo *aux = primero;
        primero = aux->getNext();
        delete aux;
        size--;
    }
}