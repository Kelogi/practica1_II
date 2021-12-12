#include<iostream>
using namespace std;

int main(){

    int A;cout<<"numero A: ";cin>>A;
    int B;cout<<"numero B: ";cin>>B;
    int multiplo;


    bool ciclo=true;

    //generar multiplos de A.
    for(int auxiliar=1;ciclo=true;auxiliar+=1){
        int multiplo=A*auxiliar;

        //saber si la V.multiplo lo es de B tambien
        if(multiplo%B==0){
            cout<<"minimo comun multiplo: "<<multiplo<<endl;
            break;

        }



    }
    return 0;

}
