/*Count frequency of a given character in a string.
Input 1:
programming
g
Output 1:
2*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);  // space before %c to consume newline

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
