/*Convert a lowercase string to uppercase without using built-in functions.
Input 1:
hello
Output 1:
HELLO*/
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a word (no spaces)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // convert to uppercase
        }
    }

    printf("Uppercase: %s\n", str);

    return 0;
}
