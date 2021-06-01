/*
CH-230-A
a3 p11.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char one[100], two[100], str[100];
    //Enter the strings
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    one[strlen(one) - 1] = '\0'; // for not counting the last blank space
    two[strlen(two) - 1] = '\0'; // for not counting the last blank space
    printf("length1=%zu\n", strlen(one));
    printf("length2=%zu\n", strlen(two));
    int res = strcmp(one, two);
    strcat(one, two);
    printf("concatenation=%s\n", one);
    strcpy(str, two);
    printf("copy=%s\n", str);
    if (res < 0)
    {
        printf("one is smaller than two\n");
    }
    else if (res > 0)
    {
        printf("one is larger than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }
    char c, len = 0;
    int occurance = 0;
    len = strlen(two);
    //"Enter the character
    scanf("%c", &c);
    for (int i = 0; i < len; i++)
    {
        if (two[i] == c)
        {
            occurance = 1;
            printf("position=%d\n", i);
            break;
        }
    }
    if (occurance == 0)
    {
        printf("The character is not in the string\n");
    }
    return 0;
}