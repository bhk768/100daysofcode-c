/*Rotate an array to the right by k positions.*/
#include <stdio.h>
int main(){
int n,i,k;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("how many rotation do you want");
scanf("%d",&k);
k=k%n;
int rotated[n];
for(i=0;i<n;i++){
   rotated[(i+k)%n]=arr[i];
}
printf("rotated array");
for(i=0;i<n;i++){
    printf("%d ",rotated[i]);
}








    return 0;
}