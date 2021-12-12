#include <iostream>
using namespace std;

int main(){

    int numero1, numero2;

    cout<<"Dame el dividendo: ";
    cin>>numero1;

    cout<<"Dame el divisor: ";
    cin>>numero2;

    cout<<"El residuo de la division "<<numero1<<"/"<<numero2<<"es:"<<(numero1%numero2)<<endl;

    return 0;

}

