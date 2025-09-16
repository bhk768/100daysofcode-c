/*Write a program to print the following pattern:

*

***

*****
*******
***

**/
#include <stdio.h>
int main(){
    int i,j;
    int block[]={1,3,5,7,3,1};
for(i=0;i<6;i++){
    for(j=0;j<block[i];j++){
       printf("*");
    }
    printf("\n");
    if(block[i]==3){
        printf("\n");
    }
}
    return 0;
}

