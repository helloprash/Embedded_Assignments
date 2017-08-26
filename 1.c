#include<stdio.h>
main()
{
	int i=0;
	printf("The even numbers in ascending order are:\n");
	while(i>=0 && i<=98)
	{
		printf("%d ",i+2);
		i=i+2;
	}
	i=102;
	printf("\n\nThe even numbers in descending order are:\n");
	while(i>=4 && i<=102)
	{
		printf("%d ",i-2);
		i=i-2;
	}
	
}
