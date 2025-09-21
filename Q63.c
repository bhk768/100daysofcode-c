/*Merge two arrays.*/
#include <stdio.h>
#include <string.h>
int main(){
    char arr1[100],arr2[100];
printf("enter two strings you want to combine\n");
scanf("%s %s",&arr1,&arr2);
strcat(arr1,arr2);
printf("merged array is %s",arr1);








    return 0;
}