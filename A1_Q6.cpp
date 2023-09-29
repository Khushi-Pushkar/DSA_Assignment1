#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Digits in reverse order (line-wise):" << endl;
    while (num != 0) {
        int digit = num % 10;
        cout << digit << endl;
        num /= 10;
    }
    return 0;
}