#include<iostream>
using namespace std;

int main(){

    float n1,n2; string op; float res; bool ban=false;

    cout<<"Ingresa el primer numero: ";cin>>n1;
    cout<<"Ingresa el operador (x,+,-,/): ";cin>>op;
    cout<<"Ingresa el segundo numero: ";cin>>n2;

    if(op=="+"){
        res=n1+n2;
        ban=true;
    }else if(op=="-"){
        res=n1-n2;
        ban=true;
    }else if(op=="x"){
        res=n1*n2;
        ban=true;
    }else if(op=="/"){
        res=n1/n2;
        ban=true;
    }else{
        cout<<"Error";
    }

    if (ban){
       cout<<n1<<op<<n2<<"="<<res<<endl;
    }

    return 0;
}
