#include<iostream>
using namespace std;

int main(){

    int n;
    bool primo=true;

    cout<<"numero: ";cin>>n;

    for (int i=2; i<n;i++){
        if(n%i==0){
            primo=false;
            break;
        }
    }

    if(primo){
        cout<<n<<" es primo"<<endl;
    }else{
        cout<<n<<" NO es primo"<<endl;
    }

    return 0;
}

