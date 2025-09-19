/*Count positive, negative, and zero elements in an array.*/
#include <stdio.h>
int main(){
int n,i,negative=0,positive=0,zero=0;
printf("enter size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
if(arr[i]<0){
    negative++;
}
else if(arr[i]>0){
    positive++;
}
else if(arr[i]==0){
    zero++;
}
}
printf("Positive:%d Negative:%d Zero:%d",positive,negative,zero);









    return 0;
}