#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    long long int s=n*n;
    while(temp !=0){
        if(temp%10 != s%10){
            cout<<"Not a Automorphic Number";
            return 0;
        }
        temp/=10;
        s/=10;
    }
    cout<<"Number is Automorphic Number";
    return 0;
}
