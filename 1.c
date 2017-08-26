#include<stdio.h>
main()
{
	int a,b,c,val,val1;
	printf("Enter the three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	val=0;val1=0;
	if(a>b)
	{
    	val=a;
	}
	else
	{
		val=b;
	}
	if(val>c)
	{
		val1=val;
	}
	else
	{
		val1=c;
	}
	printf("The largest number is %d",val1);
}

