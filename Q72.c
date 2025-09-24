/*Find the sum of all elements in a matrix.
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21*/
#include <stdio.h>
int main(){
int i,j,rows,columns,sum=0;
printf("enter no of rows and columns");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
printf("enter the elements of matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
        sum+=matrix[i][j];
    }
}
printf("the sum of elements of matrix is %d",sum);










    return 0;
}