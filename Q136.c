/*Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Input 1:
ADD 10 20
Output 1:
30
Explanation 1:
The enum ADD triggers addition of 10 and 20.*/
#include <stdio.h>
#include <string.h>
enum menu{
    add,subtract,multiply
};

int main(){
    int a,b;
    char s[100];
printf("Choose Add/subtract/multiply");
scanf("%s",s);
printf("enter two numbers ");
scanf("%d %d",&a,&b);
enum menu choice;
if(strcmp(s,"add")==0)
choice=add;
else if(strcmp(s,"subtract")==0)
choice=subtract;
else if(strcmp(s,"multiply")==0)
choice=multiply;
else
printf("wrong input");
switch(choice){
case add:
printf("%d",a+b);
break;
case subtract:
printf("%d",a-b);
break;
case multiply:
printf("%d",a*b);
break;
default:
printf("wrong input");
}









    return 0;
}