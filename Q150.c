/*Use pointer to struct to modify and display data using -> operator.
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
Explanation 1:
Pointer to structure accesses and modifies data using the arrow (->) operator.*/
#include <stdio.h>

struct student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct student s;           
    struct student *ptr = &s;   

    printf("Enter name, roll and marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
