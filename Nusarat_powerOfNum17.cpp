#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,power;
    cin>>base>>power;
    int res=1;
    for(int i=1;i<=power;i++){
        res*=base;
    }
    cout<<"Power of N: "<<res;
    return 0;
}