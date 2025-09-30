/*Print each character of a string on a new line.
Input 1:
Hi
Output 1:
H
i*/
#include <stdio.h>

// Define a maximum size for the input string
#define MAX_SIZE 100

/**
 * Prints each character of the string on a new line.
 * It iterates until the null terminator is reached.
 */
void print_chars_on_new_line(const char *s) {
    int i = 0;
    
    // Loop through the string, printing each character until the null terminator ('\0') is found.
    while (s[i] != '\0') {
        printf("%c\n", s[i]);
        i++;
    }
}

int main() {
    // 1. Declare a character array to store the user's input
    char input_string[MAX_SIZE];
    
    // 2. Prompt the user for input
    printf("Enter a string (up to %d characters): ", MAX_SIZE - 1);
    
    // 3. Read the string from the user using fgets for safer input handling
    // It reads up to MAX_SIZE-1 characters or until a newline is read.
    if (fgets(input_string, MAX_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    
    // 4. Remove the trailing newline character added by fgets (if present)
    int i = 0;
    while (input_string[i] != '\0') {
        if (input_string[i] == '\n') {
            input_string[i] = '\0'; // Replace the newline with the null terminator
            break;
        }
        i++;
    }

    // 5. Print the output
    printf("\n--- Output ---\n");
    print_chars_on_new_line(input_string);

    return 0;
}