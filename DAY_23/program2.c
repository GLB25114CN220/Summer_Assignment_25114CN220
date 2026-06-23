// --> Write a program to Find first repeating character :--

#include <stdio.h>
#include <string.h>

#define SIZE 256  // total ASCII characters

int main() {
    char str[100];
    int seen[SIZE] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch == '\n') continue; // skip newline from fgets

        if (seen[ch] == 1) {
            printf("First repeating character: %c\n", ch);
            return 0;
        }
        seen[ch] = 1;
    }

    printf("No repeating character found.\n");
    return 0;
}