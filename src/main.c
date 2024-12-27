#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 64

/*
 * A simple program that takes an input
 * line from STDIN and prints it to STDOUT.
 */
int main() {
    char buf[BUFFER_SIZE];

    printf("Enter your name: ");

    while(fgets(buf, sizeof(buf), stdin)) {

        buf[strcspn(buf, "\r\n")] = '\0'; // remove line ending

        if (buf[0] != '\0') {
            printf("Hello, %s!\n", buf);
            printf("Enter your name: ");
        } else {
            printf("You forgot to enter your name, do it now: ");
        }

    }

    printf("\rAlright then, till the next one!          \n");

    return 0;
}
