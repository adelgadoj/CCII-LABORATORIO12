#include <iostream>
#include "cola.h"
using namespace std;
int main(){
    cola A;
    for(int i = 1 ; i <= 10 ; i++){
        A.push(i);
    }
    cout << "\tCOLA:" << endl;
    A.print();
    A.busqueda(8);
    A.busqueda(3);
    A.busqueda(11);
    return 0;
}
