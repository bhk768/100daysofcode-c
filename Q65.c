/*Search in a sorted array using binary search.
binary search is checking the middle element*/
#include <stdio.h>
int main(){
int n,i,found,mid,key;
printf("enter size of the array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("which element you want to search");
scanf("%d",&key);
int high=n-1;
int low=0;
found=0;
while(low<=high){
    mid=(high+low)/2;
    if(arr[mid]==key){
printf("found at index %d",mid);
found=1;
break;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else
    high=mid-1;
    
}
if(!found){
        printf("-1");
    }









    return 0;
}