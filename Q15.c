/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
#include <stdio.h>
#include <ctype.h>
int main() {
char a;
printf("enter a character");
scanf("%c",&a);
if (isupper(a))
printf("uppercase alphabet");
else if (islower(a))
printf("Lowercase alphabet");
else if (isdigit(a))
printf("Digit");
else
printf("special character");




    return 0;
}