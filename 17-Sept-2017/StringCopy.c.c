//Copying the string from source to destination
#include<stdio.h>
char src[100];			//Source string
char dest[100];			//Destination string

char mystrcpy(char src[],char dest[])
{
	int n=0;
	dest[0]=src[0];
	while(dest[n]!='\0')
	{	
		n++;
		dest[n]=src[n];
	}
}

main()
{
	printf("Source: ");
	scanf("%s",&src);
	mystrcpy(src,dest);
	printf("Destination: %s",dest);
}
