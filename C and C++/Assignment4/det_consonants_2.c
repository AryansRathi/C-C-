/*
CH-230-A
a4 p5.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);
int main()
{
    char str[100];
    char pr;
    //Enter the string
    for (int i = 0; i < 100; i++)
    {
        fgets(str, sizeof(str), stdin);
        if (strlen(str) == 1)
        {
            break;
        }
        pr = count_consonants(str);
        printf("Number of consonants=%d\n", pr);
    }
    return 0;
}
int count_consonants(char str[])
{
    int vowel = 0, cons = 0;
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (*(i + str) == 'a' || *(i + str) == 'e' || *(i + str) == 'i' || *(i + str) == 'o' || *(i + str) == 'u' || *(i + str) == 'A' || *(i + str) == 'E' || *(i + str) == 'I' || *(i + str) == 'O' || (*(i + str) == 'U'))
        {
            vowel++;
        }
        else if ((*(i + str) >= 'a' && *(str + i) <= 'z') || (*(str + i) >= 'A' && *(str + i) <= 'Z'))
        {
            cons++;
        }
    }
    return cons;
}