#include <stdio.h>

void readChat()
{
  char c;
  FILE *fptr;
  fptr = fopen("chat.txt","r");

  if(fptr == NULL)
  {
    printf("Something went wrong");
    //exit(0);
  }

  c = fgetc(fptr);
  while(c != EOF)
  {
    printf ("%c", c);
    c = fgetc(fptr);
  }
  fclose(fptr);
}
