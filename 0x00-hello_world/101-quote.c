#include <unistd.h>
// sizeof(message)-1 to exclude null terminator
/* sizeof(message)-1 to exclude null terminator */
int main(void) {
 char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
 write(2, message, sizeof(message)-1); // sizeof(message)-1 to exclude null terminator
 return 1;
}
