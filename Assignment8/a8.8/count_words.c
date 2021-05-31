/*
CH-230-A
a8 p8.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    FILE *fp1;
    char c;
    char ch;
    char str[100];
    printf("Eneter the file\n");
    scanf("%s", str);
    int words = 0;
    int count= 0;
    int countt=0;
    int word=0;
    fp = fopen(str, "r");
    if (fp == NULL)
    {
        printf("The file cannot be opened\n");
        exit(0);
    }
    fp1 = fopen(str, "r");
    if (fp1 == NULL)
    {
        printf("The file cannot be opened\n");
        exit(0);
    }
    c=fgetc(fp);
    while (c!= EOF)
    {
        if (c == ' ' || c == ',' || c == '?' || c == '!' || c == '.' || c == '\t' || c == '\r'||c=='\n')
        {
            if (count == 1)
            {
                words++;
            }
            count = 0;
        }
        else
        {
            count=1;
        }
        c=fgetc(fp);
    }
    ch=fgetc(fp1);
    while (ch!= EOF)
    {
        if (ch == ' ' || ch == ',' || ch == '?' || ch == '!' || ch == '.' || ch == '\t' || ch == '\r'||ch =='\n')
        {
            if (countt == 1)
            {
                word++;
            }
            countt = 0;
        }
        else
        {
            countt =1;
        }
        ch=fgetc(fp1);
    }
    
    printf("The file contains %d words.", words);
    fclose(fp);
    fclose(fp1);

    return 0;
}