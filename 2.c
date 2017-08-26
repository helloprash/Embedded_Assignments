#include<stdio.h>
main()
{
	int i=0;
	printf("The odd numbers in ascending order are:\n");
	while(i>=0 && i<=98)
	{
		printf("%d ",i+1);
		i=i+2;
	}
	i=100;
	printf("\n\nThe odd numbers in descending order are:\n");
	while(i>=1 && i<=101)
	{
		printf("%d ",i-1);
		i=i-2;
	}
	
}
