/*
CH-230-A
a8 p1.[c or cpp or h]
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
    char fname[100];
    char fn[100];
    double d1, d2;
    double sum = 0, pro, div, diff;
    printf("Enter the name of two files\n");
    scanf("%s", fname);
    scanf("%s", fn);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("file cannot be opened\n");
        exit(0);
    }
    fp1 = fopen(fn, "r");
    if (fp1 == NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    fscanf(fp, "%lf", &d1);
    fscanf(fp1, "%lf", &d2);
    sum = d1 + d2;
    pro = d1 * d2;
    div = (d1 / d2);
    diff = d1 - d2;
    fp2 = fopen("results.txt", "w");
    if (fp2 == NULL)
    {
        printf("File cannot be opened\n");
        exit(2);
    }
    fprintf(fp2, "The sum is:%lf\n", sum);
    fprintf(fp2, "The difference is:%lf\n", diff);
    fprintf(fp2, "The product is:%lf\n", pro);
    fprintf(fp2, "The division is:%lf\n", div);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}