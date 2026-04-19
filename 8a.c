#include <stdio.h>

int main() {
    int i; 
    char str[100];

    // Accepting the string
    printf("Enter your name: ");
    scanf("%s", str);

    // Printing characters and their addresses
    printf("\nValue and Address of each character:\n");
    for (i = 0; str[i] != '\0'; i++) {
        printf("Character '%c' is at address %p\n", str[i], (void*)&str[i]);
    }

    return 0;
}
