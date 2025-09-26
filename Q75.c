/*Add two matrices.
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12*/
#include <stdio.h>
int main(){
int rows,columns,i,j;
printf("enter no of rows and columns of matrix1\n");
scanf("%d %d",&rows,&columns);
int matrix1[rows][columns];
int sum[rows][columns];
printf("enter elements of first matrix\n");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix1[i][j]);
    }
}
printf("enter no of rows and columns of matrix2");
scanf("%d %d",&rows,&columns);
int matrix2[rows][columns];
printf("enter the elements of matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix2[i][j]);
        
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}






    return 0;
}