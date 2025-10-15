/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Input 1:
n = 8
Output 1:
6
Explanation 1:
6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
Input 2:*/
#include <stdio.h>
int main(){
    int n,i,right;
    int totalsum=0,left=0;
    int pivot=-1;
printf("enter a positive integer");
scanf("%d",&n);
for(i=1;i<=n;i++){
totalsum+=i;
}
for(i=1;i<=n;i++){
    right=totalsum-left-i;
    if(right==left){
pivot=i;
    }
    left+=i;
}
printf("%d",pivot);







    return 0;
}