/*Write a program to calculate the factorial of a number.*/
#include <stdio.h>
int main(){
int n,i,factorial=1;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i<n)
printf("%d *",i);
else
printf("%d",i);
factorial*=i;




}

printf("= %d",factorial);





    return 0;
}