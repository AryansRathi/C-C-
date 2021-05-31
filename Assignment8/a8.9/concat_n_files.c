/*
CH-230-A
a8 p9.[c or cpp or h]
Aryans Rathi
arathi@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int n, i, a;
  //Enter the the number of files
  scanf("%d", &n);
  FILE *fn;
  FILE *tem;
  char buffer[64];
  char newline[] = "\n";
  char str[n][100];
  //Enter the file names
  for (i = 0; i < n; i++)
  {
    scanf("%s", str[i]);
  }

  fn = fopen("output.txt", "wb");
  if (fn == NULL)
  {
    printf("The file cannot be opened\n");
    exit(0);
  }

  printf("Concating the content of 3 files ...\n");
  printf("The result is:\n");
  for (i = 0; i < n; i++)
  {

    tem = fopen(str[i], "rb");
    if (tem == NULL)
    {
      printf("The file cannot be opened\n");
      exit(1);
    }
    fseek(tem, 0, SEEK_END);
    a = ftell(tem);
    fseek(tem, 0, SEEK_SET);

    fread(buffer, sizeof(char), a, tem);
    buffer[a] = '\0';

    printf("%s\n", buffer);
    fwrite(buffer, sizeof(char), a, fn);

    fclose(tem);
    fwrite(newline, sizeof(char), 1, fn);
  }
  printf("The result was written into output.txt\n");
  return 0;
}