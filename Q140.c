/*Define a struct with enum Gender and print person's gender.
Input 1:
Gender=MALE
Output 1:
Male
Explanation 1:
The enum inside the struct allows representing gender as a named constant.*/
#include <stdio.h>
struct person{
enum {
    MALE,FEMALE
   }gender;
};
int main(){
struct person p;
p.gender=MALE;
if(p.gender==MALE)
printf("Male");
else 
printf("Female");











    return 0;
}