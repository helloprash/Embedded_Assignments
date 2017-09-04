//To measure pollution for the month of August
#include<stdio.h>                                
main()
{                                                        
int pollutionData[31];                                
int n=0,maximumPollution,maxAugust,minAugust,minDate,maxDate;

        while(n>=0 && n<31)                              
		{                                              
		printf("Enter Aug-%d max pollution:",n+1);
      	scanf("%d",&maximumPollution);                            
	 	 pollutionData[n]=maximumPollution;                             
	 	 n++;
        }
        n=0;                                             
		while(n>=0 && n<31)
        {                                        
		printf("Max poll on Aug-%d is %d\n",n+1,pollutionData[n]);                                             
		n++;                                                     
		}       
	//Find Maximum and Minimum pollution                                          
		n=0;maxAugust=pollutionData[0];minAugust=pollutionData[0];
        while(n>=0 && n<30)
        {                                                
		if(maxAugust>=pollutionData[n+1])
        {
			if(minAugust>=pollutionData[n+1])
        	{
				minAugust=pollutionData[n+1];
				minDate=n+1;
			}
          	n++;
        }
        else{
                maxAugust=pollutionData[n+1];
                maxDate=n+2;
                n++;
        	}
        }
        printf("\nmax pollution was %dppm on Aug-%d\n",maxAugust,maxDate);
        printf("\nmin pollution was %dppm on Aug-%d\n",minAugust,minDate);
}
