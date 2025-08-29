/*Write a program to assign grades based on a percentage input.*/
#include <stdio.h>
int main(){
int a;
printf("enter your percentage");
scanf("%d",&a);
if(a>90)
printf("Grade A");
else if(a>80 && a<90)
printf("Grade B");
else if(a>60 && a<70)
printf("Grade D");
else 
printf("Grade F");




    return 0;
}