/*Insert an element in an array at a given position.
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40*/
#include <stdio.h>
int main(){
int i,n,index,num;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter the index and number you want to insert\n");
scanf("%d %d",&index,&num);
for(i=n;i>index;i--){
    arr[i]=arr[i-1];
}
arr[index]=num;
n++;
printf("array after insersion");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}