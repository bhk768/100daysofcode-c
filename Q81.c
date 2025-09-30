/*Count characters in a string without using built-in length functions.
Input 1:
Hello
Output 1:
5*/


#include <stdio.h>

// Define a maximum size for the input string to prevent buffer overflow
#define MAX_SIZE 100

/**
 * Counts the characters in a string without using strlen().
 * * @param s The input string (a null-terminated character array).
 * @return The number of characters in the string (excluding '\0').
 */
int manual_strlen(const char *s) {
    int count = 0;
    
    // Loop through the string, incrementing the count until the null terminator ('\0') is found.
    while (s[count] != '\0') {
        count++;
    }
    
    return count;
}

//---

int main() {
    // 1. Declare a character array to store the user's input
    char input_string[MAX_SIZE];
    
    // 2. Prompt the user for input
    printf("Enter a string (up to %d characters): ", MAX_SIZE - 1);
    
    // 3. Read the string from the user
    // The fgets() function is safer than scanf() because it prevents buffer overflow
    // It reads up to MAX_SIZE-1 characters or until a newline is read.
    if (fgets(input_string, MAX_SIZE, stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    
    // 4. Remove the trailing newline character (if present) that fgets adds
    int i = 0;
    while (input_string[i] != '\0') {
        if (input_string[i] == '\n') {
            input_string[i] = '\0'; // Replace the newline with the null terminator
            break;
        }
        i++;
    }

    // 5. Calculate the length using the custom function
    int output = manual_strlen(input_string);
    
    // 6. Print the result
    printf("\n--- Result ---\n");
    printf("The string entered was: \"%s\"\n", input_string);
    printf("Character Count (without built-in length function): %d\n", output);

    return 0;
}









 