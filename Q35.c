/*Write a program to print all factors of a given number.

*/
#include <stdio.h>
int main(){
int i,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0)
printf("%d ",i);
else
printf("");
}






    return 0;
}