/*
CH-230-A
a6 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <math.h>
#include <stdio.h>
unsigned char set3bits(unsigned char ch, int a, int b, int c);
void binary(unsigned char ch);
int main()
{
    unsigned char ch;
    int a, b, c;
    //Enter the character
    scanf("%c", &ch);
    scanf("%d %d %d", &a, &b, &c);
    printf("The decimal representation is: %d\n", ch);
    printf("The binary representation is: ");
    binary(ch);
    printf("After setting the bits: ");
    binary(set3bits(ch,a,b,c));
    return 0;
}
void binary(unsigned char ch)
{
    for (int i = 0; i < 8; i++)
    {
        int val = 1;
        for (int j = 7; j > i; j--)
        {
            val *= 2;
        }

        if (ch & val)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
unsigned char set3bits(unsigned char ch, int a, int b, int c)
{

    for (int i = 0; i < 8; i++)
    {
        int val = 1;
        for (int j = 1; j <= i; j++)
        {
            val *= 2;
        }

        if ((i == a) || (i == b) || (i == c))
        {
            ch = (ch | val);
        }
    }

    return ch;
}