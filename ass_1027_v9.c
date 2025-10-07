//convert a string to uppercase
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is simple but unsafe; use fgets() in modern compilers

    // Convert each character to uppercase
    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    // Display the result
    printf("String in uppercase: %s\n", str);

    return 0;
}

