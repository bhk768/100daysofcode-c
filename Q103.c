/*Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
Explanation 1:
The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.
Input 2:
nums = [1,2,3]
Output 2:
-1*/
#include <stdio.h>
int main(){
int n,i,right;
int left=0,totalsum=0;
int pivot=-1;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    totalsum+=arr[i];
}
for(i=0;i<n;i++){
    right=totalsum-left-arr[i];
    if(right==left){
        pivot=i;
    }
       left+=arr[i];
}
printf("%d",pivot);






    return 0;

}
