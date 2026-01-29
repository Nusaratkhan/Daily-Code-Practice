#include<iostream>
using namespace std;
int fiboFibonacci (int x){
    if(x==0 || x==1){
        return 1;
    }
    return fiboFibonacci(x-1)+fiboFibonacci(x-2);
}
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<fiboFibonacci(i)<<" ";
    }

}