/*Check if one string is a rotation of another.
Input 1:
abcde
deabc
Output 1:
Rotation*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Check if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("Not Rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}
