/*Write a program to print the product of even numbers from 1 to n.

*/
#include <stdio.h>
int main(){
int i,n;
long long product=1; 
printf("enter a number");
scanf("%d",&n);
int first=1;
for(i=2;i<=n;i+=2){
product*=i;
if(first){
    printf("%d",i);
    first=0;
}
else{
    printf(" * %d",i);
}

}
if(n<2)
printf("no even numbers up to %d",n);
else
printf("= %lld",product);


    return 0;
}