#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,s=n;
    while(n!=0){
        rev=n%10+rev*10;
        n/=10;
    }
    if(rev==s){
        cout<<"Palindrome Number: "<<s;
    }
    else
    cout<<"Not a palindrome: "<<s;
}