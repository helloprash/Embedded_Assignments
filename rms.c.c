//Find the RMS value of 3 phases//
#include<stdio.h>
#include<math.h>
int readpeak()
{
        int i,peak;
        int phase;
        scanf("%d",&peak);
        return peak;
}

float rms(int nos,float phase[nos])
{
	//printf("nos=%d",nos);
    int i,sum=0;
    float avg,avg1;
    for(i=0;i<=nos-1;i++)
    {
    	phase[i]=phase[i]*phase[i];
       // printf("\nsqr=%d\n",phase[i]);
    }
    for(i=0;i<nos;i++)
    {
        sum+=phase[i];
        //printf("\nsum=%d\n",sum);
    }
    avg1=sum/nos;
    avg=sqrt(avg1);
     //printf("avg=%f",avg);
     return avg;
}


main()
{
        int n=5,i;
        float rms1,rms2,rms3;
        float phase1[n],phase2[n],phase3[n];
        
        printf("Enter phase1 peak values:\n");
       for(i=0;i<n;i++)
       {
        phase1[i]= readpeak();
        }
       rms1=rms(n,phase1);
       
       printf("Enter phase2 peak values:\n");
       for(i=0;i<n;i++)
       {
        phase2[i]= readpeak();
        }
       rms2=rms(n,phase2);
       
       printf("Enter phase3 peak values:\n");
       for(i=0;i<n;i++)
       {
        phase3[i]= readpeak();
        }
       rms3=rms(n,phase3);
       printf("\nThe rms value of phase1=%f",rms1);
       printf("\nThe rms value of phase2=%f",rms2);
       printf("\nThe rms value of phase3=%f",rms3);
}


