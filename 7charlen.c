//To find the length of the string
#include<stdio.h>
main()
{
	char name[]="PrashanthKumar";
	char character;
	int n=0;
	printf("The given string is: ");
	printf("%s",name);
	character=name[0];
	while(character!='\0')
	{	
		n++;
		character=name[n];
	}
	printf("\nLength of the string=%d\n",n);
}
