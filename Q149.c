/*Use malloc() to allocate structure memory dynamically and print details.
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
Explanation 1:
Memory for structure is dynamically allocated on heap using malloc().*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[10];
    int roll;
    int marks;
}student;
int main(){
student *s1=malloc(sizeof(student));
if(s1==NULL){
    printf("memory allocation");
    return 1;
}
printf("enter name,roll,marks");
scanf("%s %d %d",s1->name,&s1->roll,&s1->marks);
printf("name: %s Roll: %d Marks: %d",s1->name,s1->roll,s1->marks);
free(s1);













    return 0;
}