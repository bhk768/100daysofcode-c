/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11
Explanation 1:
The subarray [7, -1, 2, 3] has the largest sum 11.*/
#include <stdio.h>
int main(){
int n,i;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int current_sum=arr[0];
int max_sum=arr[0];
for(i=1;i<n;i++){
    if(current_sum+arr[i]>arr[i]){
        current_sum=current_sum+arr[i];
    }
    else
    current_sum=arr[i];
    if(current_sum>max_sum){
        max_sum=current_sum;
    }
}
printf("max subaaray is %d",max_sum);









    return 0;
}