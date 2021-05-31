/*
CH-230-A
a4 p4.[c or cpp or h]
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
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') || (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cons++;
        }
    }
    return cons;
}