/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>
int main(){
int sec;
printf("enter seconds");
scanf("%d",&sec);
int hours=sec/3600;
int min=(sec % 3600)/60;
int seconds=sec%60;
printf("%d:%d:%d",hours,min,seconds);







    return 0;
}