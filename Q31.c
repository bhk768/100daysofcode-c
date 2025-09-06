/*Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>
int main(){
int n,binary[32],i=0,j;
printf("enter a number");
scanf("%d",&n);
if(n==0)
printf("binary =0");
while(n>0){
binary[i]=n%2;
n=n/2;
i++;
}
printf("Binary:");
for(j=i-1;j>=0;j--){
    printf("%d",binary[j]);
}
/*j=i-1 means the last filled position in array..also binary is read from last remainder to first*/



    return 0;
}