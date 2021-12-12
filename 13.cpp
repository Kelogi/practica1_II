#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"numero: ";cin>>n;

    for (int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<": Es divisor de "<<n<<endl;
        }
    }

    return 0;
}
