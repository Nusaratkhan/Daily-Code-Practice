#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int temp=n,sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;

    }
    if (n % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not a Harshad Number";

    return 0;
}