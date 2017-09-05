#include<stdio.h>
main()
{
    signed int array[100];
    signed int n;
	int mul3=0,mul4=0;   
	int rem3,rem4;
	//Generate random number
        n=0;
        while(n>=0 && n<100)
        {                                                     
		array[n]=1.2*n;
        n+=2;                                       
		}
        n=1;
        while(n>=1 && n<100)
        {
             array[n]=-0.5*n;
             n+=2;
        }                                                
		n=99;                                            
		while(n>=1 && n<100)                             
		{                                                     
		array[n]=1.3*n;
             n-=3;                                       
			 }                                                
			 n=0;
        while(n>=0 && n<100)
        {
        n++;
        }
//Find multiples of 3 
	n=0;
	while(n>=0 && n<100)
	{
	 rem3=array[n]%3;
	 if(rem3==0)
	 {
      printf("Multi3 at %d is %d\n",n,array[n]);
           mul3++;
	 }
	 n++;
	}
//Find multiples of 4
	n=0;
	while(n>=0 && n<100)
	{
        rem4=array[n]%4;
	 if(rem4==0)
	 {
      printf("Multi4 at %d is %d\n",n,array[n]);
           mul4++;
	 }
	 n++;
	}

printf("The number of multi of 3 are %d\n",mul3);
printf("The number of multi of 4 are %d\n",mul4);
}

