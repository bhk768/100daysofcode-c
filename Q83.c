/*Count vowels and consonants in a string.
Input 1:
hello
Output 1:
Vowels=2, Consonants=3*/
#include <stdio.h>
#include <ctype.h>   // for tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  // reads a word (no spaces)

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // make lowercase for easy check
        if (ch >= 'a' && ch <= 'z') {   // check only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
