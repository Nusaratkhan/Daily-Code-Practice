#include<iostream>
using namespace std;
void isPrime(int n){
    if(n<2){
    cout<<"Not a prime Number";
    return;
   }
    
    for(int i=2;i*i<=n;i++){
    if(n%i==0){
    cout<<"Not a prime Number";
    return;
    }
    }

    cout<<"Prime Number";
}
int main(){
    int n;
    cin>>n;
    isPrime(n);

    return 0;
}