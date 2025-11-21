/*Write a function that accepts a structure as parameter and prints its members.
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
Explanation 1:
The structure is passed by value to a function that prints its data.*/
#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
void ab(struct student s){
    printf("%s\n",s.name);
    printf("%d\n",s.roll);
    printf("%d\n",s.marks);
}
int main(){
    struct student s1;
printf("enter name,roll,marks");
scanf("%s %d %d",s1.name,&s1.roll,&s1.marks);
ab(s1);











    return 0;
}