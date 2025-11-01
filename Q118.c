/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
Input 1:
nums1 = [0,3,2,4]
Output 1:
1
Input 2:
nums1 = [1,2,3]
Output 2:
0*/
#include <stdio.h>
int main(){
int n,i,expectedsum=0,realsum=0;
printf("enter the size of the array");
scanf("%d",&n);
int arr[n];
for(i=1;i<=n;i++)
expectedsum+=i;
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    realsum+=arr[i];
}
printf("the missing element is %d",expectedsum-realsum);




    return 0;
}