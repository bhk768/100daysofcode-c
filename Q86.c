/*Check if a string is a palindrome.
Input 1:
madam
Output 1:
Palindrome*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int flag = 1;  // assume palindrome

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;  // not palindrome
            break;
        }
    }

    if(flag)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
