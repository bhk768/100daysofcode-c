/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Explanation 1:
Smallest number greater than 5 is 8, whose index is 2.
Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1*/
#include <stdio.h>
int findceil(int arr[],int n,int x){
int ceilindex=-1;
int low=0;
int high=n-1;
while(low<=high){
    int mid=(high+low)/2;
    if(arr[mid]==x){
        ceilindex=mid;
        while(ceilindex>0 && arr[ceilindex-1]==x)
        ceilindex--;
        return ceilindex;
    }
    else if(arr[mid]<x){
low=mid+1;
    }
    else{
    ceilindex=mid;
    high=mid-1;}
}
return ceilindex;
}
int main(){
    int n,i,x;
printf("enter size of array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter an integer");
scanf("%d",&x);
int index=findceil(arr,n,x);
if(index==-1){
    printf("-1");
}
else
printf("index of ceil of %d is %d",x,index);



    return 0;
}