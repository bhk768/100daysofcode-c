/*Write a program to find the LCM of two numbers.*/
#include <stdio.h>
int main(){
int num1,num2,lcm;
printf("enter two number");
scanf("%d %d",&num1,&num2);
int max=(num1>num2)? num1:num2;
while(1){
if(max%num1==0 && max%num2==0){
lcm=max;
break;
}
max++;
}
printf("lcm is %d",lcm);





    return 0;
}