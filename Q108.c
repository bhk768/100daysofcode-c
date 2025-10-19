/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]
Input 2:*/
#include <stdio.h>
int main(){
int n,i,product=1,zeros=0;
printf("enter the size of an array");
scanf("%d",&n);
int nums[n];
int answer[100];
printf("enter the elements of array");
for(i=0;i<n;i++){
    scanf("%d",&nums[i]);
}
for(i=0;i<n;i++){
    if(nums[i]!=0){
product*=nums[i];
    }
    else
    zeros++;
}
for(i=0;i<n;i++){
    if(zeros>1){
        answer[i]=0;
    }
    else if(zeros==1){
        if(nums[i]==0){
            answer[i]=product;
        }
        else
        answer[i]=0;
    }
    else
    answer[i]=product/nums[i];
}
for(i=0;i<n;i++){
    printf("%d",answer[i]);
    if(i!=n-1){
        printf(",");
    }
}




    return 0;
}