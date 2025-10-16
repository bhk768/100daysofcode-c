/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1
Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8*/
#include <stdio.h>
int main(){
    int n,i,j;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    int last=-1;
    for(j=i-1;j>=0;j--){

        if(arr[j]>arr[i]){
            last=arr[j];
            break;
        
        }
        }
        printf("%d ",last);
        if(i!=n-1){
            printf(", ");
    }
}








    return 0;
}