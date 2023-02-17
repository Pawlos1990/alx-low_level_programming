#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int n;
srand(time(NULL));
n = rand() % 201 - 100;
printf("%d\n", n);
if (n > 0) {
printf("is positive\n");
} else if (n == 0) {
printf("is zero\n");
} else {
printf("is negative\n");
}
return 0;
}
