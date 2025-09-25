/*ind the transpose of a matrix.
Input 1:
2 3
1 2 3
4 5 6*/
#include <stdio.h>
int main(){
int i,j,rows,columns;
printf("enter no of rows and columns");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
int transpose[columns][rows];
printf("enter the elements of matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        transpose[j][i]=matrix[i][j];
    }
}
for(i=0;i<columns;i++){
    for(j=0;j<rows;j++){
        printf("%d ",transpose[i][j]);
    }
    printf("\n");
}









    return 0;
}