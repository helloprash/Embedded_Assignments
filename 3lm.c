//To find numbers less than & greater than 53 
#include<stdio.h>
main()                                           
{
        int array[100];
        int pointer,less=0,more=0;                            
		
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
        
        /*find numbers lesser than & greater than 53 */
        pointer=0;
       while(pointer>=0 && pointer<100)
       {                                                    
	   if(array[pointer]<53)                                  
	   {                        
		less++;pointer++;
    	}                                                
		else
        {                                                  
		   more++;pointer++;                                    
		}                                            
		}
printf("The number of integers less than 53 are %d\n",less);
printf("The number of integers more than 53 are %d\n",more);
}
