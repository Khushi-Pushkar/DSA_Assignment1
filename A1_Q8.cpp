#include <iostream>
#include <cmath>

using namespace std;

long long rotateNumber(long long n, int a) {
    int numDigits = log10(n) + 1; 
    a = a % numDigits;
    if (a < 0) {
        a = numDigits + a;
    }
    long long divisor = pow(10, a);
    long long multiplier = pow(10, numDigits - a);
    long long rotatedNumber = (n % divisor) * multiplier + (n / divisor);
    return rotatedNumber;
}
int main() {
    long long n;
    int b;

    cout << "Enter a number (n): ";
    cin >> n;
    cout << "Enter the number of positions to rotate (b): ";
    cin >>b;
    long long rotatedNumber = rotateNumber(n, b);
    cout << "Rotated number is: " << rotatedNumber << endl;
    return 0;
}
