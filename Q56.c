/*Read and print elements of a one-dimensional array.*/
#include <stdio.h>
int main(){
int i,n;
printf("enter size of erray");
scanf("%d",&n);
int arr[n];
printf("enter %d elements",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("the array elements are:\n");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
return 0;







}
