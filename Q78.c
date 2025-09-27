/*Find the sum of main diagonal elements for a square matrix.
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15*/
#include <stdio.h>
int main(){
int i,j,rows,columns;
int sum=0;
int count=0;
printf("enter no of rows and columns of matrix");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
printf("enter the elements of matrix");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
    }
}
int diag[rows];
for(i=0;i<rows && i<columns;i++){
    diag[count++]=matrix[i][i];
}
for(i=0;i<count;i++){
        sum+=diag[i];
    
}
printf("%d",sum);








    return 0;
}