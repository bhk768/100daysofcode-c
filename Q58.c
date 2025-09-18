/*Find the maximum and minimum element in an array.
*/
#include <stdio.h>
int main(){
int n,i;
printf("enter the size of the array");
scanf("%d",&n);
int arr[n];
printf("the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
//0  is initialised so start i from 1
for(i=1;i<n;i++){
if(arr[i]>max){
    max=arr[i];
}
if(arr[i]<min){
    min=arr[i];
}
} 
printf("maximum:%d",max);
printf("minimum:%d",min);




    return 0;
}