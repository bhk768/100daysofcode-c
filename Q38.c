/*Write a program to find the sum of digits of a number.*/
#include <stdio.h>
int main(){
int n,rem,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0){
rem=n%10;
sum+=rem;
n=n/10;


}
printf("%d",sum);






    return 0;
}