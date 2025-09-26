/*Check if a matrix is symmetric.
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False*/
#include <stdio.h>
int main(){
int i,j,rows,columns;
printf("enter no of rows and columns");
scanf("%d %d",&rows,&columns);
int matrix[rows][columns];
printf("enter the elements for matrix\n");
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        scanf("%d",&matrix[i][j]);
    }
}
int transpose[columns][rows];
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        transpose[j][i]=matrix[i][j];
    }
}
int issymmetric=1;
for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
        if(transpose[i][j]!=matrix[i][j]){
            issymmetric=0;
            break;
        }
        if(issymmetric){
            break;
        }
    }
}if(issymmetric){
    printf("its symmetric");
}
else
printf("its not symmetric");








    return 0;
}