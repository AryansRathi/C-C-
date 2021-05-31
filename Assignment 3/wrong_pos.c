/*
CH-230-A
a3 p4.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c);
int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
    }
    return 0;
}
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
        ;
    /* do nothing */
    return idx;
}
