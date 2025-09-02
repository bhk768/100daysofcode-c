/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>
int main(){
int a,b,result;
char sym;
printf("enter two numbers and then special character");
scanf("%d %d %c",&a,&b,&sym);
switch(sym){
case '+':
result=a+b;
printf("%d+%d = %d",a,b,result);
break;
case '-':
result=a-b;
printf("%d-%d= %d",a,b,result);
break;
case '*':
result=a*b;
printf("%d*%d= %d",a,b,result);
break;
case '/':
if(b!=0)
printf("%d/%d=%d",a,b,a/b);
else
printf("Error modulus by zero is not allowed");
break;
case '%':
printf("%d%%%d=%d",a,b,a%b);
break;
default:
printf("invalid operator");



}





    return 0;
}