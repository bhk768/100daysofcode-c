/*Find the digit that occurs the most times in an integer number.
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7*/
#include <stdio.h>
int main(){
int i,n,max=0,digit;
int freq[10]={0};
printf("enter a number");
scanf("%d",&n);
while(n>0){
    digit=n%10;
    freq[digit]++;
    n=n/10;
}
for(i=0;i<10;i++){
    if(freq[i]>freq[max]){
        max=i;
    }
}
printf("most frequent digit is %d",max);







    return 0;
}