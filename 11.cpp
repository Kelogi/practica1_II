#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ingrese el numero: ";
    cin>>n;

    for(int i=1;i<=10;i++){
        int multiplicacion=n*i;
        cout<<i<<"X"<<n<<"="<<multiplicacion<<endl;}
}
