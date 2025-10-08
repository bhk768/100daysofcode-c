/*Reverse each word in a sentence without changing the word order.
Input 1:
I love coding
Output 1:
I evol gnidoc*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);  // (For simplicity; use fgets in modern compilers)

    char *word_start = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }

    // Reverse the last word
    reverse(word_start, temp - 1);

    printf("Output: %s\n", str);
    return 0;
}
