/*
 CH-230-A
 a5_p3.c
Aryans Rathi
 arathi@jacobs-university.de
 */
#include<stdio.h>
#include<string.h>
int  count_lower(char* str);
int main()
{
char str[100];
int i,coun;
printf("Enter the string\n");
for(i=0;i<100;i++){
fgets(str,sizeof(str),stdin);
if(strlen(str)==1)
{
break;
}
coun=count_lower(str);
printf("Number of lower case character %d\n",coun);
}
return 0;
}
int count_lower(char* str)
{
int i;
int count=0;
for(i=0;*(str + i)!='\0';i++)
{
if(*(str + i)>='a' && *(str + i)<='z')
{
count++;
}
}
return count;
}