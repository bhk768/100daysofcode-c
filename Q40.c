/*Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
#include <string.h>
int main(){
char binary[100],onescomplement[100];
printf("enter a number");
scanf("%s",&binary);
int length =strlen(binary);
for(int i=0;i<length;i++){
if(binary[i]=='0'){
onescomplement[i]='1';
}
else if(binary[i]=='1'){
onescomplement[i]='0';
}
else{
printf("invalid! enter binary number");
return 1;
}
}
onescomplement[length]='\0';
printf("1'st complement is %s",onescomplement);







    return 0;

}
