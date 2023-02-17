#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator
    int n = rand() % 201 - 100;  // Generate a random integer between -100 and 100
    printf("%d\n", n);  // Print the random integer
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    return 0;
}
