/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
Input 1:
nums1 = [1,3,3,4]
Output 1:
3
Input 2:
nums1 = [1,2,2]
Output 2:
2*/
#include <stdio.h>
int main(){
int n,i,j,maxcount=0,freqnum;
printf("enter the size of the array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    int count=0;
    for(j=0;j<n;j++){
        if(arr[i]==arr[j])
        count++;
    }
    if(count>maxcount){
    maxcount=count;
    freqnum=arr[i];
    }
}
printf("the repeated number is %d",freqnum);









    return 0;
}