/*Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
int main(){
int n,temp,power=1,digit=0,first,last;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(temp>=10){
temp/=10;
power*=10;
digit++;



}
first=temp;
last=n%10;
n=n-first*power-last+last*power+first;
printf("no after swapping first and last digit is %d",n);






    return 0;
}