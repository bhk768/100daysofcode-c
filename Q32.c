/*Write a program to check if a number is a palindrome.*/
#include <stdio.h>
int main(){
int n,i=0,j,check[35],rev=0,original;
printf("enter a number");
scanf("%d",&n);
original=n;
while(n!=0){
check[i]=n%10;
rev=rev*10+check[i];
n=n/10;
i++;

}
if(original==rev)
printf("The number is a palindrome.");
else
printf("the number is not a palidrome");







    return 0;
}