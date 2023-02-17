#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int n = rand();
    int last_digit = n % 10;

    std::cout << "Last digit of " << n << " is ";

    if (last_digit > 5) {
        std::cout << last_digit << " and is greater than 5\n";
    } else if (last_digit == 0) {
        std::cout << "0\n";
    } else {
        std::cout << last_digit << " and is less than 6 and not 0\n";
    }

    return 0;
}
