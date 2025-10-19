/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
Explanation 1:
arr2 + arr3 = 700, which is maximum.
Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4*/
#include <stdio.h>
int main(){
int n,i,k;
int maxsum=0,windowsum=0;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter k");
scanf("%d",&k);
for(i=0;i<k;i++){
windowsum+=arr[i];
}
maxsum=windowsum;
for(i=k;i<n;i++){
    windowsum=windowsum-arr[i-k]+arr[i];
    if(windowsum>maxsum){
        maxsum=windowsum;
    }
}
printf("maximum sum of subarray of size k is %d",maxsum);








    return 0;
}