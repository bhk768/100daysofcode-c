/*Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
Explanation 1:
The program iterates through each character, counts vowels (A, E, I, O, U) and consonants, ignoring other symbols.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
char file[100];
int ch,consonants=0,vowels=0;
FILE *fp=NULL;
printf("enter the name of the file");
if((scanf("%s",file))!=1){
    fprintf(stderr,"invalid input");
    return 1;
}
fp=fopen(file,"r");
if((fp==NULL)){
    fprintf(stderr,"coud not open the file");
    return 1;
}
while((ch=fgetc(fp))!=EOF){
if(isalpha(ch)){
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    vowels++;
    else
    consonants++;
}
}
fclose(fp);
printf("vowels : %d\n consonants:%d",vowels,consonants);






    return 0;
}
