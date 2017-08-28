//Read N numbers and find the largest and smallest//
#include<stdio.h>
main()
{
    int n,s1,s2,s3,z,k=1;
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
    printf("\nThe Smallest of %d numbers is %d",z,s3);
}
