#include<stdio.h>
main()
{
	int n,x1=5,x2=3,a,b,c,d;
	printf("Guess a number\n");
	//scanf("%d",&n);
	printf("\nAdd some number(5) to the guessed number\n");
	//scanf("%d",&x1);
	a=n+x1;
	printf("\nAdd some number(3) to the guessed number\n");
	//scanf("%d",&x2);
	b=a+x2;
	printf("\nSubtract the guessed number from the above sum\n");
	c=b-n;
	printf("\nAdd 2 to the above answer\n");
	d=c+2;
	printf("\nThe answer you got is %d!",d);
}
