//To find the length of the string
#include<stdio.h>
main()
{
	char name[100];			//Array to store the string
	int n=0;
	printf("Enter the string : ");
	scanf("%s",&name);
	while(name[n]!='\0')
	{	
		n++;
	}
	printf("\nLength of the string=%d\n",n);
}
