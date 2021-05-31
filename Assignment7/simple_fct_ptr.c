/*
CH-230-A
a7 p1.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void upper(char *str);
void lower(char *str);
void both(char *str);
void quit(char *str);
void (*fun[4])(char *);
int main()
{
    char str[100];
    int op;
    //"Enter the string
    fgets(str, sizeof(str), stdin);
    fun[1] = upper;
    fun[2] = lower;
    fun[3] = both;
    fun[4] = quit;
    while (op != 4)
    {
        scanf("%d", &op);
        fun[op](str);
    }

    return 0;
}
void upper(char *str)
{
    char str1[100];
    int i = 0, j = 0;
    strcpy(str1, str);
    while (str1[i] != '\0')
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')

            str1[j] = str[i] - 32;
        else
            str1[j] = str[i];
        i++, j++;
    }
    printf("%s", str1);
}
void lower(char *str)
{
    char str1[100];
    int i = 0, j = 0;
    strcpy(str1, str);
    while (str1[i] != '\0')
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')

            str1[j] = str[i] + 32;

        else
            str1[j] = str[i];
        i++, j++;
    }
    printf("%s", str1);
}
void both(char *str)
{
    char str1[100];
    int i = 0, j = 0;
    strcpy(str1, str);
    while (str1[i] != '\0')
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {

            str1[j] = str[i] + 32;
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[j] = str[i] - 32;
        }
        i++, j++;
    }
    printf("%s", str1);
}
void quit(char *str)
{
    exit(0);
}