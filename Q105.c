/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
Input 1:
nums = [3,2,3]
Output 1:
3
Explanation 1:
Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.*/
#include <stdio.h>
int main(){
    int n,i,j,majority=-1;
printf("enter the size of array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    int count=0;
    for(j=0;j<n;j++){
if(arr[j]==arr[i]){
    count++;
}
    }
    if(count>n/2){
        majority=arr[i];
        break;
    }
}
printf("%d",majority);








    return 0;
}