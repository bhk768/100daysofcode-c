/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include <stdio.h>
int main(){
int a,b,c;
printf("write the sides of a triangle");
scanf("%d %d %d",&a,&b,&c);
if ((a+b>c) && (a+c>b) && (b+c>a)) {
if (a==b && b==c)
printf("its an equilateral triangle");
else if (a==b || b==c || c==a)
printf("its an isosceles triangle");
else
printf("its an scalene triangle");
}
else
printf("the given values does not form a triangle");





    return 0;
}