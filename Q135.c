/*Assign explicit values starting from 10 and print them.
Input 1:
No input
Output 1:
A=10
B=11
C=12
Explanation 1:
Enum values can be explicitly assigned; subsequent values auto-increment.*/
#include <stdio.h>
enum values{
    a=10,b,c
};
int main(){
printf("A:%d\n",a);
printf("B:%d\n",b);
printf("C:%d\n",c);











    return 0;
}