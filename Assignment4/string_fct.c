/*
 CH-230-A
 a4_p12.c
Aryans Rathi
 arathi@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
void replaceAll(char *str, char c, char e);
int main()
{
    char str[80], c, r;

    printf("Enter the string\n");
    for (int i = 2; i > 1; i++)
    {
        fgets(str, sizeof(str), stdin);
        if (strcmp(str, "stop") == 0)
        {
            break;
        }
        scanf("%c", &c);
        getchar();
        scanf("%c", &r);
        getchar();
        replaceAll(str, c, r);
        printf("Replaced %s\n", str);
    }
    return 0;
}
void replaceAll(char *str, char c, char e)
{
    int i;

    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) == c)
        {
            *(str + i) = e;
        }
    }
}
