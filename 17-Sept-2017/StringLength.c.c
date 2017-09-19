//To find the length of the string
#include<stdio.h>

int mystrlen(char name[])
{
	int n=0;
	while(name[n]!='\0')
	{	
	     n++;
	}
	return n;
}

main()
{
	char name[100];		//Array to store the string
	int length;
	printf("Enter the string : ");
	scanf("%s",&name);
	length=mystrlen(name);
	printf("\nLength of the string=%d\n",length);
}
