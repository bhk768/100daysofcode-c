/*Find the sum of array elements.*/
#include <stdio.h>
int main(){
int i, n,sum=0;
printf("enter size of array: ");
scanf("%d", &n);
int arr[n];
printf("enter %d elements",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
    printf("%d",sum);








    return 0;
}