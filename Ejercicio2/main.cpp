#include <iostream>
#include "cola.h"
using namespace std;
int main(){
    cola A;
    for(int i = 1 ; i <= 10 ; i++){
        A.push(i);
    }
    cout << "\tLista al inicio:" << endl;
    A.print();
    for(int j = 0 ; j < 5 ; j++){
        A.remove();
    }
    cout << "\tLista despues de remover elementos:" << endl;
    A.print();
    return 0;
}