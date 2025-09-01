/*Write a program to calculate an electricity bill based on units consumed.*/
#include <stdio.h>
int main(){
int unit;
float bill;
printf("enter the units consumed");
scanf("%d",&unit);
if(unit<=100)
bill=unit*5;
else if (unit<=200)
bill=(100*5) + (unit-100)*9;
else
bill=(100*5)+(100*9) + (unit-200)*16;
printf("Electricity bill:%.0f",bill);







    return 0;
}