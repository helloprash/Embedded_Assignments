#include<stdio.h>
main()
{
	int i=0,a=200,b=201,c;
	printf("The odd numbers in ascending order are:\n");
	while(i>=0 && i<=49)
	{
		b=b-2;
		c=a%b;
		printf("%d ",c);
		i++;
	}
	i=0;b=99;
	printf("\n\nThe odd numbers in descending order are:\n");
	while(i>=0 && i<=49)
	{
		b=b+2;
		c=a%b;
		printf("%d ",c);
		i++;
	}
}
