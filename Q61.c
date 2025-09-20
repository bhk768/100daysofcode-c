/*Search for an element in an array using linear search.*/
#include <stdio.h>
int main(){
int n,i,find;
printf("enter size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("number which you want to find");
scanf("%d",&find);
for(i=0;i<n;i++){
    if(arr[i]==find){
        printf("found at index %d",i);
    }
    else{
    printf("-1");
    break;
    }
}










    return 0;
}