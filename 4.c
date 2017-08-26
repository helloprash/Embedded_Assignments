#include<stdio.h>
main()
{
	float a,b,c,v1,v2,v3;
	printf("Enter the lengths:");
	scanf("%f %f %f",&a,&b,&c);
	v1=a+b;v2=b+c;v3=a+c;
	if(v1>c && v2>a && v3>b)
	{
		printf("The lengths are valid to form a triangle");
	}
	else
	{
		printf("The lengths are invalid to form a triangle");
	}
}
