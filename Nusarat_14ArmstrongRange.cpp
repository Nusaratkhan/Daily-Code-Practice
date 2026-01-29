#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, digits = 0;

        int t = num;
        while (t != 0) {
            digits++;
            t /= 10;
        }

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}
