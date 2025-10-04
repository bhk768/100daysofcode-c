/*Find the first repeating lowercase alphabet in a string.
Input 1:
stress
Output 1:
s*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // To count frequency of each lowercase alphabet
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {   // only lowercase alphabets
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {  // repeating
                printf("Output: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("Output: No repeating lowercase alphabet found\n");
    return 0;
}
