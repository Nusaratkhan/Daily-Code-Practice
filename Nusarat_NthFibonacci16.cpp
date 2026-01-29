#include<iostream>
using namespace std;
int Fibonacci(int x){
    if(x==0 || x==1)
    return 1;

    return Fibonacci(x-1)+Fibonacci(x-2);
}
int main(){
    int n;
    cin>>n;
    int s=Fibonacci(n);
    cout<<"Nth of Fibonacci is: "<<s;
    return 0;
}