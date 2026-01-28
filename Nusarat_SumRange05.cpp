#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    // for(int i=n;i<=m;i++){
    //     sum+=i;
    // }
    // cout<<"Sum of numbers in a given range: "<<sum;
    // return 0;

    while(m!=1){
        sum+=n;
        n++;
        m--;
    }
    cout<<sum;
}