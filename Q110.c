/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6
Explanation 1:
1st contiguous subarray , max = 3; 2nd contiguous subarray , max = 3; 3rd contiguous subarray , max = 4; 4th contiguous subarray , max = 5; 5th*/
#include <stdio.h>
int main(){
int n,i,j,k;
printf("enter the size of the array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
printf("enter k");
scanf("%d",&k);
//for first window
for(i=1;i<k;i++){
if(arr[i]>max){
    max=arr[i];
}

}
printf("%d ",max);
//for continuous
for(i=k;i<n;i++){
  max=arr[i-k+1];
for(j=i-k+1;j<=i;j++){
    if(arr[j]>max){
        max=arr[j];
    }

}
printf("%d ",max);
}







    return 0;
}