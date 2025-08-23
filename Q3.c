/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
int main(){
printf("enter the values of perimeter and breadth of a rectangle");
int a,b;
scanf("%d %d",&a,&b);
int perimeter=2*(a+b);
int area = a*b;
printf("Perimeter=%d,Area=%d",perimeter,area);





    return 0;
}