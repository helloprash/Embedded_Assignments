#include<stdio.h>

int BinarySearch(int array[],int i,int x)
{
	int lowerBound=1;
	int upperBound=i;
	int middlePoint;
	int flag=1;
	FILE *fptr;    //File pointer
	
	fptr=fopen("binary.html","w+");
	while(flag==1)
	{
		if(upperBound<lowerBound)
		{
			fprintf(fptr,"%s","<H1><b><center>Number does not exist</center></b></H1>");
			flag=0;
		}
		
		middlePoint=lowerBound+(upperBound-lowerBound)/2;
		
		if(array[middlePoint]<x)
		lowerBound=middlePoint+1;
		
		else if(array[middlePoint]>x)
		upperBound=middlePoint-1;
		
		else if(array[middlePoint]==x && middlePoint<=1000)
		{
			fprintf(fptr,"<H1><b><center>%d found at location %d</center></b></H1>",x,middlePoint+1);
			flag=0;
		}
	}
}

main()
{
	FILE *ptr;    //File pointer
	int x;		  //Value read from file
	int idx=0;    //Index of the array
	int num;	  //Number to be searched
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
			idx++;
		}
	}
	
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	
	BinarySearch(numArray,idx,num);	
}
