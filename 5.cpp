#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int A, B;

    cout<<"Dame el primer numero: ";
    cin>>A;

    cout<<"Dame el segundo numero: ";
    cin>>B;


    int auxiliar=float(A)/float(B);
    double resultado=float(A)/float(B);


    if((resultado+0.5)>=(auxiliar+1)){
        cout<<(auxiliar+1);}
    else{
        cout<<auxiliar;}

}
