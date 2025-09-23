/*Find the second largest element in an array.*/
#include <stdio.h>
int main(){
int i,n,largest,second_largest;
printf("enter size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
if(arr[0]>arr[1]){
largest=arr[0];
second_largest=arr[1];
}
else{
    largest=arr[1];
    second_largest=arr[0];
}
for(i=2;i<n;i++){
    if(arr[i]>largest){
        second_largest=largest;
        largest=arr[i];
    }
    else if(arr[i]>second_largest && arr[i]!=largest){
        second_largest=arr[i];
    }
}
if(largest==second_largest){
    printf("no distinct second largest element");
}
else
printf("the second largest element is %d",second_largest);







    return 0;
}