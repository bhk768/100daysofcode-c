/*Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>
int main(){
int n,i,j,isPrime;
printf("enter a number");
scanf("%d",&n);
if(n<2){
    printf("cant be less than 2");
    return 0;
}
for(i=2;i<=n;i++){
    isPrime=1;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("%d ",i);
    }
}
printf("\n");






    return 0;
}