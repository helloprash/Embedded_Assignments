#include<stdio.h>
main()
{
	int i=0,a=200,b=200,c;
	printf("The even numbers in ascending order are:\n");
	while(i>=0 && i<=48)
	{
		b=b-2;
		c=a%b;
		printf("%d ",c);
		i++;
	}
	i=0;b=100;
	printf("\n\nThe even numbers in descending order are:\n");
	while(i>=0 && i<=48)
	{
		b=b+2;
		c=a%b;
		printf("%d ",c);
		i++;
	}
}
