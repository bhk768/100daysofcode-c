/**/
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