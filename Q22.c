/*Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>
int main() {
float  cp,sp,profit,profit_percentage,loss,loss_percentage;
printf("give cost and selling price");
scanf("%f %f",&cp,&sp);
if(sp>cp){
profit=sp-cp;
profit_percentage =(profit/cp)*100;
printf("profit %.2f%%",profit_percentage);
}
else if (cp>sp){
loss =cp-sp;
loss_percentage=(loss/cp)*100;
printf("loss %.2f%%",loss_percentage);
}
else
printf("neither profit nor loss");







    return 0;
}