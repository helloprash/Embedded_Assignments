#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
	    	printf("The smallest number is %d",a);
		}
		else
		{
			printf("The smallest number is %d",c);
		}
	}
	else
	    {
	        if(b<c)
	        {
	        	printf("The smallest number is %d",b);
			}
			else
			{
				printf("The smallest number is %d",c);
			}
		}
	}
