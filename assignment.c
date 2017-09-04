#include<stdio.h>

int readTemperature(int n)
{
  int value;
  scanf("%d",&value);
  return value;
}

int readMinimumTemperature(int temp[],int initWindow,int finalWindow)
 {
   int min=temp[initWindow],n=initWindow;
   while(n>=initWindow && n<finalWindow)
   {
   if(min>=temp[n+1])
    {
       min=temp[n+1];
    }
   n++;
   }
   return min;
 }
 
int readMaximumTemperature(int temp[],int initWindow,int finalWindow)
 {
 	int max=temp[initWindow],n=initWindow;
     while(n>=initWindow && n<finalWindow)
   	  {
   		if(max<=temp[n+1])
    	{
       		max=temp[n+1];
    	}
   		n++;
   	  }
   	 return max;
 }

float readAverageTemperature(int temp[],int initWindow,int finalWindow)
{
	float sum=0,avg;
	int n=initWindow;
	while(n>=initWindow && n<=finalWindow)
	{
	sum+=temp[n];
	n++;
	}
	avg=sum/(finalWindow-initWindow+1);
	return avg;
}

int SendDataToServer(int minTemp,int maxTemp,int avgTemp)
{
}

main()
{
	int currentWindow;
	static int temperature[15];                      
	int minTemperature,maxTemperature,averageTemperature;
	int initial5Window=0,final5Window=4,initial10Window=0,final10Window=9,initial15Window=0,final15Window=14;
	int flag=1;
	
	while(flag==1)
	{
	 currentWindow=initial5Window;
	 
	 //READ LAST 5 TEMPERATURE VALUES
	 printf("Enter last 5 temperature values:");
     while(currentWindow>=initial5Window && currentWindow<=final5Window)
     {
     temperature[currentWindow]=readTemperature(currentWindow);
     currentWindow++;
     }
     
     //5 MINUTE WINDOW
 	printf("\n**********5min Window**********\nTemperature details b/w %dmins to %dmins\n",initial5Window+1,final5Window+1);
    minTemperature=readMinimumTemperature(temperature,initial5Window,final5Window);
    maxTemperature=readMaximumTemperature(temperature,initial5Window,final5Window);
    averageTemperature=readAverageTemperature(temperature,initial5Window,final5Window);
    SendDataToServer(minTemperature,maxTemperature,averageTemperature);
    
    printf("\nMinimum temperature for last 5 minutes = %d\n",minTemperature);
    printf("Maximum temperature for last 5 minutes = %d\n",maxTemperature);
    printf("Average temperature for last 5 minutes = %d\n",averageTemperature);	
    printf("Data sent successfully to server\n\n");
			initial5Window+=5;
   			final5Window+=5;
   	 	 	
   	 //10 MINUTE WINDOW	 	
	if(final5Window>9)
   	{
   	 	printf("**********10min Window**********\nTemperature details b/w %dmins to %dmins\n",initial10Window+1,final10Window+1);
   	 	minTemperature=readMinimumTemperature(temperature,initial10Window,final10Window);
    	maxTemperature=readMaximumTemperature(temperature,initial10Window,final10Window);
   		averageTemperature=readAverageTemperature(temperature,initial10Window,final10Window);
   		SendDataToServer(minTemperature,maxTemperature,averageTemperature);
   		
   		printf("\nMinimum temperature for last 10 minutes = %d\n",minTemperature);
   		printf("Maximum temperature for last 10 minutes = %d\n",maxTemperature);
    	printf("Average temperature for last 10 minutes = %d\n",averageTemperature);
    	printf("Data sent successfully to server\n\n");
    			initial10Window+=5;
    			final10Window+=5;
	}
			
	 //15 MINUTE WINDOW		
	if(final5Window>14)
   	{
   	 	printf("**********15min Window**********\nTemperature details b/w %dmins to %dmins\n",initial15Window+1,final15Window+1);
    	minTemperature=readMinimumTemperature(temperature,initial15Window,final15Window);
    	maxTemperature=readMaximumTemperature(temperature,initial15Window,final15Window);
   		averageTemperature=readAverageTemperature(temperature,initial15Window,final15Window);
   		SendDataToServer(minTemperature,maxTemperature,averageTemperature);
   		
    	printf("\nMinimum temperature for last 15 minutes = %d\n",minTemperature);
    	printf("Maximum temperature for last 15 minutes = %d\n",maxTemperature);
    	printf("Average temperature for last 15 minutes = %d\n",averageTemperature);
    	printf("Data sent successfully to server\n\n");
    			initial15Window+=5;
    			final15Window+=5;
	}
	}	
}


