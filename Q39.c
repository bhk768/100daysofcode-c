/*Write a program to find the product of odd digits of a number.*/
#include <stdio.h>
int main(){
int n,rem,mult=1;
int hasodd=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0){
rem=n%10;
n=n/10;
if (rem%2!=0){
mult=mult*rem;
hasodd=1;

}




}
if(hasodd){
printf("product of odd digits is : %d",mult);


}
else
printf("1(no odd digits,assume=1)");






    return 0;
}