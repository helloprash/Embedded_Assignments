//To find number of even and odd numbers 
#include<stdio.h>
main()                                           
{
        int array[100];
        int pointer,remainder,even=0,odd=0;                            
		
		//Generate random number
        pointer=0;                                            
		 while(pointer>=0 && pointer<100)                             
		 {
             array[pointer]=1.2*pointer;                                  
			 pointer+=2;
        }
        pointer=1;
        while(pointer>=1 && pointer<100)                             
		{                                                     
		array[pointer]=0.5*pointer;
             pointer+=2;                                       
		}
        pointer=99;                                            
		while(pointer>=1 && pointer<100)                             
		{                                                     
		array[pointer]=1.3*pointer;
             pointer-=3;
        }
        pointer=0;
        while(pointer>=0 && pointer<100)
        {
        printf("at %d is %d\n",pointer,array[pointer]);
        pointer++;
        }

// Find number of even and odd inetgers
        pointer=0;
        while(pointer>=0 && pointer<100)
        {
        	remainder=array[pointer]%2;
        	if(remainder==0)
        	{
        		even++;pointer++;
			}
			else
			{
				odd++;pointer++;
			}
		}
		printf("The numbers of even intergers are %d\n",even);
		printf("The numbers of even intergers are %d",odd);
    }
