/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4
Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1*/
#include <stdio.h>
int main(){
int nums[100];
int first=-1;
int last=-1;
int target;
int n,i;
printf("enter the numbers you will give");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&nums[i]);
}
printf("enter the target number");
scanf("%d",&target);
for(i=0;i<n;i++){
    if(nums[i]==target){
      {
        if(first==-1){
            first=i;
        }
        last=i;
      }
    }
    
}
if(first==-1){
    printf("-1,-1");
}
else
printf("the first occurence index %d and last %d",first,last);







    return 0;

}
