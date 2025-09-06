/*Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
#include <math.h>
int main(){
int n,digits=0,original,remainder,result=0;
printf("enter a number");
scanf("%d",&n);
original=n;
int temp=n;
while(temp!=0){
digits++;
temp=temp/10;
}
temp=n;
while(temp!=0){
remainder=temp%10;
result+=(int)(pow(remainder,digits)+0.5);/*pow returns value in decimal ,we used 0.5 to round off to nearest integer*/
temp=temp/10;


}
if(original==result)
printf("its an Armstrong number");
else
printf("its not an armstrong number");





    return 0;
}