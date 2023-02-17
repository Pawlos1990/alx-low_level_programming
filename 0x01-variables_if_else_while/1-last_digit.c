#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   int n;
   srand(time(0));
   n = rand();    int lastDigit = n % 10;
    cout << "Last digit of " << n << " is ";
    if (lastDigit > 5) {
        cout << lastDigit << " and is greater than 5";
    } else if (lastDigit == 0) {
        cout << lastDigit << " and is 0";
    } else {
        cout << lastDigit << " and is less than 6 and not 0";
    }
    return 0;
}
