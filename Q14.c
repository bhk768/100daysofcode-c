/*Write a program to input a character and check whether it is a vowel or consonant using if–else.*/
#include <stdio.h>
int main(){
char im;
printf("enter a character");
scanf("%c",&im);
if (im=='a'||im=='e'||im=='i'||im=='o'||im=='u'|| im=='A' || im=='E' || im=='I' || im=='O' || im=='U')
printf("Vowel");
else
printf("consonant");



    return 0;
}