#include <iostream>
#include <vector>
using namespace std;
int calculateInverse(int n) {
    vector<int> digits; 
    int inverse = 0; 
    int position = 1; 

    while (n != 0) {
        int digit = n % 10;
        digits.push_back(digit);
        n /= 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        inverse += position * digits[i];
        position *= 10;
    }

    return inverse;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int inverse = calculateInverse(num);
    cout << "Inverse of the number is: " << inverse << endl;
    return 0;
}