/*
CH-230-A
a8 p7.[c or cpp or h]
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
    FILE *fp2;
    char c;
    fp = fopen("text1.txt", "r");
    if (fp == NULL)
    {
        printf("The file cannot be opened\n");
        exit(0);
    }
    fp1 = fopen("text2.txt", "r");
    if (fp1 == NULL)
    {
        printf("The file cannot be opened\n");
        exit(1);
    }
    fp2 = fopen("merge12.txt", "w");
    {
        if (fp2 == NULL)
        {
            printf("The file cannot be opened\n");
            exit(2);
        }
    }
    // Copy contents of first file to third file
    while ((c = fgetc(fp)) != EOF)
        fputc(c, fp2);
    // Copy contents of second file to third file
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp2);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}