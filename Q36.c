/*Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h>
int main(){
int num1,num2,hcf;
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
int min = (num1<num2)? num1:num2;
for(int i=min;i>=0;i--){
if(num1%i==0 && num2%i==0){
    hcf=i;
    break;
}


}
printf("Hcf is %d",hcf);





    return 0;
}