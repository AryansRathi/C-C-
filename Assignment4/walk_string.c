/*
 CH-230-A
 a4_p11.c
Aryans Rathi
 arathi@jacobs-university.de
 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_insensitive(char *str, char c);
int main()
{
    char s[50];
    char *str;
    char ch;
    int l, r, count;
    printf("Enter the string\n");
    fgets(s, sizeof(s), stdin);
    r = strlen(s);
    str = (char *)malloc(r * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    strcpy(str, s);
    printf("Enter a character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = (char)tolower((int)ch);
    }

    for (l = 0; l <= strlen(s); l++)
    {
        if (str[l] >= 'A' && str[l] <= 'Z')
        {
            str[l] = (char)tolower((int)str[l]);
        }
    }
    count = count_insensitive(str, ch);
    printf("occurrence of the character is %d\n", count);
    free(str); //Deallocating string s
    return 0;
}
int count_insensitive(char *str, char c)
{
    int i, count = 0;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) == c)
        {
            count++;
        }
    }
    return count;
}