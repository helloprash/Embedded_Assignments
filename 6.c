#include<stdio.h>
main()
{
	int n,f,i=0,j=0,k=0;
	char choice;

	printf("Enter the number of digits:");
    scanf("%d",&n);
    int a[n];
    printf("The numbers are:\n",a[i]);
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
    printf("\nThe largest number is %d\n",j);
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
    printf("\nThe smallest number is %d\n\n",k);
    printf("Do you want to do more : Y/N\nPress 1 if Yes\nPress 2 if No\n");
    f=1;
	while(f==1)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{   
				    i=0;j=0;k=0;
					printf("\nEnter the number of digits:");
                    scanf("%d",&n);
                    int a[n];
                    printf("The numbers are:\n",a[i]);
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
                    printf("\nThe largest number is %d\n",j);
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
                    printf("\nThe smallest number is %d\n\n",k);
                    printf("Do you want to do more : Y/N\nPress 1 if Yes\nPress 2 if No\n");
                    break;
			    }
			case 2:
				{
					printf("Exit\n");
					f=0;
					break;
				}
			default:
				{
					printf("Error! Press Y/N\n");
					break;
				}
		}           
	}
}
