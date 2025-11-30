/*Take two structs as input and check if they are identical.
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
Explanation 1:
Compares all structure members and prints 'Same' if identical.*/
#include <stdio.h>
#include <string.h>
struct ca{
char student[100];
int roll;
};
struct cb{
char student[100];
int roll;
};
int main(){
struct ca s1;
struct cb s2;
printf("enter name and roll of  topper student class a");
scanf("%s %d",s1.student,&s1.roll);
printf("enter name and roll of topper student of class B");
scanf("%s %d",s2.student,&s2.roll);
if(strcmp(s1.student,s2.student)==0 && s1.roll==s2.roll){
    printf("same");
}
else
printf("not same");










    return 0;
}