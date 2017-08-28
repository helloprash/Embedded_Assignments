//Read a number X and check whether X  is divisible by a given number Y or not//
#include<stdio.h>
main()
{
        int X,Y,val=0;
        printf("Enter the value of X:");
        scanf("%d",&X);
        printf("Enter the value of Y:");
        scanf("%d",&Y);
        val=X%Y;
        if(val==0)
        {
        printf("%d is divisible by %d\n",X,Y);
        }
        else
        {       
		printf("%d is not divisible by %d\n",X,Y);
        }
}
