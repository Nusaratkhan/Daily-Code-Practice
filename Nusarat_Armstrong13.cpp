#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit,sum=0,count=0;
    int temp=n;

    while(temp!=0){
        count++;
        temp/=10;    
    }
    temp=n;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    if(sum==n)
    cout<<"Armstrong Number";
    else
    cout<<"Not armstrong";
}