#include <iostream>
#include "cola.h"
using namespace std;
int main(){
    cola A;
    for(int i = 1 ; i <= 10 ; i++){
        A.push(i);
    }
    
    A.print();
    return 0;
}