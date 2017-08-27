#include<stdio.h>
main()
{
	int n,i=0,j=0,k=0;
	printf("Enter the number of digits:");
    scanf("%d",&n);
    int a[n];
printf("The numbers are:",a[i]);
while(i>=0 && i<=n-1)
{
    scanf("%d",&a[i]);
    i++;
}
i=0; j=a[i];
while(i>=0 && i<=n-2)
{
	if(j>=a[i+1])
	{
	   i++;
	}
	else
	{
		j=a[i+1]; i++;
	}
}
	printf("The largest number is %d\n",j);
	i=0; k=a[i];
while(i>=0 && i<=n-2)
{
	if(k<=a[i+1])
	{
	   i++;
	}
	else
	{
		k=a[i+1]; i++;
	}
}
	printf("\nThe smallest number is %d\n",k);
}
