/*
CH-230-A
a5 p7.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *str1,*str2,a[100],b[100];
int size1,size2;
size1=strlen(a);
size2=strlen(b);
str1=(char*)malloc(size1*sizeof(char));
if (str1==NULL)
{
//Memory allocation failes
exit(0);
}
//Enter the stirngs
fgets(a,sizeof(a),stdin);
a[strlen(a) - 1] = '\0';
str2=(char*)malloc(size2*sizeof(char));
if (str2==NULL)
{
//Memory allocation failes
exit(1);
}
fgets(b,sizeof(b),stdin);
b[strlen(b) - 1] = '\0';
strcat(a,b);
printf("Result of concatenation: %s\n",a);
free(str1);
return 0;
}