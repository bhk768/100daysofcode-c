/*Print the initials of a name.
Input 1:
John Doe
Output 1:
J.D.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char name[100];
    printf("Enter a name: ");
    gets(name);  // (Use fgets in modern compilers)

    // Print first character (first initial)
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    // Loop through to find spaces, then print next character as initial
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf("%c.", toupper(name[i + 1]));
    }

    return 0;
}
