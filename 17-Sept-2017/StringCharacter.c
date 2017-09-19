#include<stdio.h>

char* mystrchr(const char *arr, char c)
{
  while(*arr!='\0')
  {
    if(*arr == c)
    {
	arr++;
	return arr;
    }
    else
	arr++;
  }
  printf("Character not found");
}
main()
{
  char array[100];
  printf("Enter String\n");
  scanf("%s",array);
  char character='h';
  char* ret=mystrchr(array,character);
  printf("String after %c is %s\n",character,ret);
}
