#include<stdio.h>

int BinarySearch(int array[],int i)
{
	int lowerBound=0;
	int upperBound=i;
	int middlePoint;
	int num;	   //Number to be searched
	int *ptr;
	int flag=1;
	FILE *fptr;    //File pointer
	
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	
	fptr=fopen("binary.html","w");
	while(flag==1)
	{
		
		if(upperBound<lowerBound)
		{
			fprintf(fptr,"%s","<html><H1><b><center>Number does not exist</center></b></H1></html>");
			flag=0;
		}
		ptr=array;
		middlePoint=lowerBound+(upperBound-lowerBound)/2;
		ptr+=middlePoint;
		
		if(*ptr<num)
		   lowerBound=middlePoint+1;
		
		else if(*ptr>num)
		   upperBound=middlePoint-1;
		
		else if(*ptr==num)
		{
		 	fprintf(fptr,"<html><H1><b><center>%d found at location %d</center></b></H1></html>",num,middlePoint+1);
			flag=0;
		}
	}
}

main()
{
	FILE *ptr;    //File pointer
	int x;		  //Value read from file
	int idx=0;    //Index of the array
	int val;	 
	int flag=1;
	int numArray[1000];
	
	ptr=fopen("numsort.txt","r");
	while(flag==1)
	{
		val=fscanf(ptr,"%d",&x);
		if(val==EOF)
		{
			flag=0;
	    }
	    else
	    {
	    	numArray[idx]=x;
	    	printf("%d\n",numArray[idx]);
			idx++;
		}
	}
	
	BinarySearch(numArray,idx);	
}
