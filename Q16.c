/*Write a program to input three numbers and find the largest among them using if–else.*/
#include <stdio.h>
int main() {
printf("enter three numbers");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("The largest number is : %d",a);
else if (b>a && b>c)
printf("the largest number is: %d",b);
else
printf("the largest number is:%d",c);

    return 0;
}