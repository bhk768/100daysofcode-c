/*Find and print the student with the highest marks.
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.*/
#include <stdio.h>
#include <string.h>
struct student{
char name[100];
int marks;
};
int main(){
    int i,j;
   char f_n[100];
    int f_m;
struct student s[3];
for(i=0;i<3;i++){
    printf("enter details of student %d\n",i+1);
    printf("enter the name");
    scanf("%s",s[i].name);
    printf("enter marks");
    scanf("%d",&s[i].marks);
}
f_m=0;
for(i=0;i<3;i++){
if(s[i].marks>f_m){
    f_m=s[i].marks;
    strcpy(f_n,s[i].name);
}
}
printf("%s %d",f_n,f_m);








    return 0;
}