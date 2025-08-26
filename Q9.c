/*Write a program to calculate simple and compound interest for given principal, rate, and time.

*/
#include <stdio.h>
# include <math.h>
int main(){
float p,r,t;
printf("write the values of p,r,t");
scanf("%f %f %f",&p,&r,&t);
float s_i=(p*r*t)/100;
float c_i=p*(pow(1+r/100,t)-1);
printf("simple interest :%f,compound inerest:%f",s_i,c_i);



    return 0;
}