#include <stdio.h>

int main() {
    char fullname[100];
    char character;
    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Entered Name: ");
    puts(fullname);
    printf("Enter a single character to see the difference: ");
    scanf(" %c", &character);
    printf("Single character entered: %c\n", character);

    return 0;
}