#include<stdio.h>
main()
{
	int n,i=0,j=0,k=0,l,m;
	printf("Enter a number less than 100:");
	scanf("%d",&n);
	m=n;
	int a[11]={2,3,5,7,11,13,17,19,23,29,31};
	int b[7];
	if(n>100)
	{
		printf("The number is greater than 100");
	}
	else
	{
    printf("The factors of %d are:",n);
	while(k>=0 && k<=12 && n!=1)
	{
		j=n%a[i];
		if(j==0)
		{
			j=n/a[i];
			b[l]=a[i];
			if(b[l]==m)
			{
				printf(" Prime Number ");
			}
			printf("%d ",b[l]);
			n=j; k++; l++;
		}
		else
		{
			i++; k++;
		}
	}
    }
}
