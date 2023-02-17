#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This program generates a random integer between -100 and 100 and 
// prints whether it is positive, negative, or zero.
int main(void)
{
int n;
srand(time(NULL));
n = rand() % 201 - 100;

printf("%d ", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

return 0;
}
