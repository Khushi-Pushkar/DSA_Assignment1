#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cout << "Enter the first number (num1): ";
    cin >> num1;
    cout << "Enter the second number (num2): ";
    cin >> num2;
    int num11 = num1;
    int num22 = num2;
    while (num11 % num22 != 0){
        int rem = num11 % num22;
        num11 = num22;
        num22 = rem;
    }
    int gcd = num22;
    int lcm = (num1 * num2) / gcd;
    cout << (gcd) << endl;
    cout << (lcm) << endl;
} 