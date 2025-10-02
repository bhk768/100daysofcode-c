/*Replace spaces with hyphens in a string.
Input 1:
hello world
Output 1:
hello-world
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read input

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("Output: %s", str);
    return 0;
}
