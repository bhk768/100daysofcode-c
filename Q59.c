/*Count even and odd numbers in an array.*/
#include <stdio.h>
int main(){
    int i,even=0,odd=0,n;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
     if(arr[i]%2==0){
even++;
    }
    else
    odd++;
}


printf("even=%d odd=%d",even,odd);









    return 0;
}