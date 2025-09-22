/*Delete an element from an array.
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5*/
#include <stdio.h>
int main(){
 int n, i, index;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index of element to delete: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
        return 0;
    }
    for(i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
n--;
printf("Array after insersion");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}









    return 0;
}