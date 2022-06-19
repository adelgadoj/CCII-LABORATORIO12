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
    void busqueda(int);
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
void cola::busqueda(int _d) // Funcion de busqueda
{
    Nodo *aux = primero;
    int p = 0;
    bool b = false;
    while (aux)
    {
        if (aux->getDato() == _d)
        {
            cout << "Se encontro Dato " << _d << " en la posicion: " << p << endl;
            b = true;
            return;
        }
        else
        {
            aux = aux->getNext();
            p++;
        }
    }
    if (b == false)
    {
        cout << "No se encontro dato: "<< _d <<" :(" << endl;
    }
}