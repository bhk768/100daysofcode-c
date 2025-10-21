/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6
Explanation 1:
Window [-8, 2] First negative integer is -8. Window No negative integers, output is 0. Window [3, -6] First negative integer is -6. Window [-6, 10]  First negative integer is -6. Window [-6, 10] First negative integer is -6.*/
#include <stdio.h>
int main(){
int n,i,k,j,fn,fn2;
int flag=-1;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter k");
scanf("%d",&k);
//for first window
for(i=0;i<k;i++){
    if(arr[i]<0){
if(flag==-1){
    fn=arr[i];
    flag=0;
}

    }

}
if(flag==-1)
printf("0 ");
else
printf("%d ",fn);
//for rest
for(i=k;i<n;i++){
   int  flag2=-1;
    for(j=i-k+1;j<=i;j++){
if(arr[j]<0){
    if(flag2==-1){
fn2=arr[j];
flag2=0;
    }
}
    }
if(flag2==-1)
printf("0 ");
else
printf("%d ",fn2);
}








    return 0;
}