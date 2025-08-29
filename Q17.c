/*Write a program to find the roots of a quadratic equation and categorize them.

*/
#include <stdio.h>
int main(){
float  a,b,c,D,root1,root2,realpart,imagpart;
printf("enter coeffcients a,b and c");
scanf("%f %f %f",&a,&b,&c);
D= (b*b -4*a*c);
if(D>0){
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("roots are real and distinct\n");
printf("Root1=%.2f,Root2=%.2f",root1,root2);
}
else if(D==0){
root1=root2=-b/(2*a);
printf("Roots are real and equal");
printf("Root1=Root2=%.2f\n",root1);



}
else{
realpart=-b/(2*a);
imagpart=sqrt(-D)/(2*a);
printf("Roots are imaginary(complex conjugates):\n");
printf("Root1=%.2f+%.2f\n",realpart,imagpart);
printf("root2:%.2f-%.2f",realpart,imagpart);




}







    return 0;
}