#include<iostream>
using namespace std;

int main(){


    char n;
    cout<<"Ingresa un caracter:";cin>>n;
    if(isalpha(n)){
        bool minus=true;

        string mayus="ACBDEFGHIJKLMNÑOPQRSTUVWXYZ";
        int len=mayus.length();

        for (int i=0;i<=len-1;i++){
            if (mayus[i]==n){
                minus=false;
                break;
            }
        }

        char minuscula=tolower(n);
        char mayuscula=toupper(n);

        if (minus==true){
            cout<<"Letra convertida: "<<mayuscula<<endl;
        }else{
            cout<<"Letra convertida: "<<minuscula<<endl;
        }
   }

    return 0;
}


