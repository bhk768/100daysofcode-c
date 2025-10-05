/*Find the longest word in a sentence.
Input 1:
I love programming
Output 1:
programming*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    gets(sentence); // note: for simplicity; in modern compilers use fgets()

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }

        if (sentence[i] == '\0')
            break;
        i++;
    }

    printf("%s", longest);
    return 0;
}
