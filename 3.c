#include<stdio.h>
main()
{
	int n,i=0,v1=0,v2=1,val=1;
	printf("Enter the number of digits:");
    scanf("%d",&n);
printf("The Fibonacci series is:");
while(i>=0 && i<=n-1)
{
	val=v1+v2;
	printf("%d ",val);
    v2=v1; 
	v1=val;	
	i++;
}
}
