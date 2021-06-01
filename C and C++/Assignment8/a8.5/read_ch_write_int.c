/*
CH-230-A
a8 p5.[c or cpp or h]
Aryans Rathi
myemail@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp1,*fp2;
char c;
char d;
int sum=0;
fp1=fopen("chars.txt","r");
if (fp1==NULL)
{
    printf("File cannot be opened\n");
    exit(0);
}
fscanf(fp1,"%c %c",&c,&d);
sum=c+d;
fp2=fopen("codesum.txt","w");
if (fp2==NULL)
{
    printf("File cannot be opended\n");
    exit(1);
}
fprintf(fp2,"%d",sum);
fclose(fp1);
fclose(fp2);
return 0;
}

     