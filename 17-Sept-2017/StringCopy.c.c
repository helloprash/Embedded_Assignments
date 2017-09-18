//Copying the string from source to destination
#include<stdio.h>
main()
{
	char src[100];			//Source string
	char dest[100];			//Destination string
	int n=0;
	printf("source: ");
	scanf("%s",&src);
	dest[0]=src[0];
	while(dest[n]!='\0')
	{	
		n++;
		dest[n]=src[n];
	}
	printf("Destination:%s",dest);
}
