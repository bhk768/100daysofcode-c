/*Print initials of a name with the surname displayed in full.
Input 1:
John David Doe
Output 1:
J.D. Doe*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for toupper()

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline (if present)
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int last_space = -1;

    // Find the position of the last space (before surname)
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space = i;
            break;
        }
    }

    // Print initials for all names before surname
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (int i = 0; i < last_space; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < last_space)
            printf("%c.", toupper(name[i + 1]));
    }

    // Print a space and surname in full
    if (last_space != -1)
        printf(" %s\n", &name[last_space + 1]);
    else
        printf("%s\n", name); // if only one name (no spaces)

    return 0;
}
