#include<stdio.h>
main()
{
	float a,b,c,val;
	printf("Enter the lengths:");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			a=a*a;b=b*b;c=c*c;
			val=b+c;
				if(val==a)
            	{
	            	printf("The lengths are valid to form a right angled triangle");
                }
            	else
               	{
		            printf("The lengths are invalid to form a right angled triangle");
	            }
		}
		else
		{
			a=a*a;b=b*b;c=c*c;
			val=a+b;
				if(val==c)
            	{
	            	printf("The lengths are valid to form a right angled triangle");
                }
            	else
               	{
		            printf("The lengths are invalid to form a right angled triangle");
	            }
		}
	}
	else
	{
		if(b>c)
		{
			a=a*a;b=b*b;c=c*c;
			val=a+c;
				if(val==b)
            	{
	            	printf("The lengths are valid to form a right angled triangle");
                }
            	else
               	{
		            printf("The lengths are invalid to form a right angled triangle");
	            }
		}
		else
		{
			a=a*a;b=b*b;c=c*c;
			val=a+b;
				if(val==c)
            	{
	            	printf("The lengths are valid to form a right angled triangle");
                }
            	else
               	{
		            printf("The lengths are invalid to form a right angled triangle");
	            }
		}	
	}
}
