#include <iostream>
using namespace std;
int main() {
    long long num; 
    cout << "Enter a number: ";
    cin >> num;
     
  int digitCount = 0;
    long long a = num; 
    while (a!= 0) {
        digitCount++;
        a/= 10;
    }
  cout << "Number of digits: " << digitCount << endl;
    return 0;
}
