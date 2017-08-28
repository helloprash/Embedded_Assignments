#include<stdio.h>
main()
{
    int n,s1,s2,s3,z,f,k=1;
    char choice;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    z=n;
    if(n>0)
	{
        printf("\nEnter the First number : ");
        scanf("%d",&s1);
        n--;
       	while(n>0)
		{
            printf("\nEnter the next number : ");
            scanf("%d",&s2);
            while(k==1)
			{
				s3=s2;
				k=0;
			}
            if(s1<s2)
            {
            	if(s1<=s3)
            	{
            		s3=s1;
				}
				s1=s2;
			}
			else
			{
				if(s2<=s3)
				{
					s3=s2;
				}
			}
            n--;
        } 
    }
    printf("\nThe Largest of %d numbers is %d",z,s1);
    printf("\nThe Smallest of %d numbers is %d\n\n",z,s3);
    printf("Do you want to do more : Y/N\nPress 1 if Yes\nPress 2 if No\n");
    f=1;
	while(f==1)
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					int n,s1,s2,s3,z,f,k=1;
   					char choice;
    				printf("*********************************\nEnter the number of integers : ");
    				scanf("%d",&n);
    				z=n;
    				if(n>0)
					{
        				printf("\nEnter the First number : ");
        				scanf("%d",&s1);
        				n--;
       					while(n>0)
						{
            				printf("\nEnter the next number : ");
            				scanf("%d",&s2);
            				while(k==1)
							{
								s3=s2;
								k=0;
							}
            				if(s1<s2)
            				{
            					if(s1<=s3)
            					{
            						s3=s1;
								}
								s1=s2;
							}	
							else
							{
								if(s2<=s3)
								{
									s3=s2;
								}
							}
            				n--;
       					}	 
   					}
    				printf("\nThe Largest of %d numbers is %d",z,s1);
    				printf("\nThe Smallest of %d numbers is %d\n\n",z,s3);
    				printf("Do you want to do more : Y/N\nPress 1 if Yes\nPress 2 if No\n");
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
