/*Write a program to take a string input. Change it to sentence case.
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic
Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int i;
char str[100];
printf("enter the string");
fgets(str,sizeof(str),stdin);
for(i=0;str[i]!='\0';i++){
if(i==0 || str[i-1]==' ')
str[i]=toupper(str[i]);
else
str[i]=tolower(str[i]);
}

printf("the string after sentence case is %s",str);









    return 0;
}


