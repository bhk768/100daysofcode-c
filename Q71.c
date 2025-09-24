/*Read and print a matrix.
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4*/
#include <stdio.h>
int main(){
int i,j,rows,columns;
printf("enter no of rows and columns");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
printf("enter the elements of the matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}










    return 0;
}