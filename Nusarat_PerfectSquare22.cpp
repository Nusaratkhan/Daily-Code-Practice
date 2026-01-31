#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i * i <= n) {
        if (i * i == n) {
            cout << "Perfect Square: "<<i;
            return 0;
        }
        i++;
    }

    cout << "Not a Perfect Square";
    return 0;
}
