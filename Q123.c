/*Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.*/
#include <stdio.h>
#include <ctype.h>
int main(){
FILE *fp;
char ch;
int characters=0,words=0,lines=0;
int inword=0;
char filename[100];
printf("enter the filename");
scanf("%s",filename);
fp=fopen(filename,"r");
while((ch=fgetc(fp))!=EOF){
characters++;
if(ch=='\n')
lines++;
if(!isspace(ch)){
    if(inword==0){
        words++;
        inword=1;
    }
}
else{
    inword=0;
}

}
fclose(fp);
printf("total characters :%d",characters);
printf("total words: %d",words);
printf("total lines: %d",lines);












    return 0;
}