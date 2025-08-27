/*Write a program to input a year and check whether it is a leap year or not using conditional statements.

*/
#include <stdio.h>
int main(){
int a;
printf("enter a year");
scanf("%d",&a);
if (a%400==0 || (a%4==0 && a%100!=0))
printf("its a leap year");
else
printf("its not a leap year");





    return 0;
}