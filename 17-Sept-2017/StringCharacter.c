//Implemantaion of strchar()
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	const char array[100];			//Array to store the string
	const char character='h';		//character to be found
	const char *ret;	
  
  printf("Enter the string:");
	scanf("%s",array);
  
	ret=array;
	while(*ret!='\0')
	{
		if(*ret==character)
		{
			*ret++;
			printf("String after %c is %s\n",character,ret);
			exit(0);
		}
	
		else
			*ret++;
	}
	printf("Character not found");
}
