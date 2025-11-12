/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
char fname[100];
char txt[100];
FILE *fp=NULL;
printf("enter the name of the file");
scanf("%s",fname);
getchar();  //we added this to clear the input buffer
fp=fopen(fname,"a");
if(fp==NULL){
    fprintf(stderr,"could not open the file");
    return 1;
}
printf("enter the text ");
if((fgets(txt,sizeof(txt),stdin))==NULL){
    fprintf(stderr,"unable to take input of text");
    return 1;
}
fprintf(fp,"%s",txt);
fclose(fp);

printf("successfully appended");







    return 0;
}