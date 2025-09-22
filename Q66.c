/*Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>
int main(){
int n,i,key;
printf("enter size of the array");
scanf("%d",&n);
int arr[n+1];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("which element you want to insert");
scanf("%d",&key);
int high=n-1;
int low=0;
int mid;
int pos;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==key){
        pos=mid;
    
    break;
}
    else if(arr[mid]<key){
        low=mid+1;
    }
    else{
        pos=mid;
        high=mid-1;
    }
}
for(i=n;i>pos;i--){
    arr[i]=arr[i-1];
}
arr[pos]=key;
n++;
printf("array after insersion:\n");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}








    return 0;

}
