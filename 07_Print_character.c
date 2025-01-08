#include <stdio.h>

int main() {
    char ch[20]; // Declare a character array with size 20
    printf("Enter a string (up to 19 characters): ");
    scanf("%19s", ch); // Use %19s to limit input to 19 characters + null terminator
    printf("You entered: %s\n", ch);
    return 0;
}
