/*Find the sum of each row of a matrix and store it in an array.
2 3
1 2 3
4 5 6
Output 1:
6 15*/
#include <stdio.h>
int main(){
int i,j,rows,columns;
printf("enter no of rows and columns");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
int rowsum[rows];
printf("enter the elements");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<rows;i++){
    rowsum[i]=0;
    for(j=0;j<columns;j++){
        rowsum[i]+=matrix[i][j];
    }
}

for(i=0;i<rows;i++){
    printf("%d ",rowsum[i]);
}









    return 0;
}