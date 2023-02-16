#include <unistd.h>
/**
 * Main function for the 101-quote program.
 *
 * This program prints a specified message to the standard error stream.
 * It takes one command-line argument, which should be a string to print.
 *
 * Returns: 0 on success, or 1 if an error occurred.
 */
int main(int argc, char *argv[]) {
  // your code here
}

int main(void) {
  char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  
  write(STDERR_FILENO, message, sizeof(message) - 1);
  return 1;
}
