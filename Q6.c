/*Write a program to swap two numbers using a third variable.*/
#include <stdio.h>
int main() {
printf("enter any two numbers");
int a,b;
scanf("%d %d",&a,&b);
int c =a;
 a =b;
 b=c;
printf("After swap:%d %d",a,b);





    return 0;
}