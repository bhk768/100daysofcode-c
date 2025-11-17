/*Print all enum names and integer values using a loop.
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer.*/
#include <stdio.h>
enum color{
    red,yellow,green
};
int main(){
const char *names[]={"red","yellow","green"};
int i;
for(i=red;i<=green;i++){
printf("%s-%d",names[i],i);
}











    return 0;
}