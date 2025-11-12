/*Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)
Explanation 1:
The program opens the existing file and prints its content using fgets().
Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
Explanation 2:
Since fopen() returns NULL, an error message is displayed instead of reading.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char filename[100];
FILE *fp=NULL;
int ch;
printf("enter the name of the file");
fgets(filename,sizeof(filename),stdin);
filename[strcspn(filename,"\n")]='\0';
fp=fopen(filename,"r");
if(fp==NULL){
    fprintf(stderr,"could not open the file");
    return 1;
}
while((ch=fgetc(fp))!=EOF){
    printf("%c",ch);
}
fclose(fp);








    return 0;
}