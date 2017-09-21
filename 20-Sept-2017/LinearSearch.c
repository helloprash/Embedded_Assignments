#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int linearSearch(int *numptr)
{
	int num;    		//Number to be searched
	int val;
	int flag=1;
	FILE *fptr; 		//File pointer
	fptr=fopen("linear.html","w");
	fprintf(fptr,"<HTML>\n");
	fprintf(fptr,"<meta http-equiv=\"refresh\" content=\"1\">\n");
	if(fptr == NULL)
    	{
        	fprintf(fptr,"<p>the error with file open is %d</p>\n",errno);
       		fprintf(fptr,"%s\n",strerror(errno));
        	fprintf(fptr,"</HTML>\n");
        	fclose(fptr);
        	exit(0);
    	}
	
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	
	while(flag)
	{
		val=*numptr;
		if(val==num)
		{
			fprintf(fptr,"%s","<H1><B><center>Number Found!!</center></B></H1>");
			break;
		}
		else if(val==EOF)
		{
			fprintf(fptr,"%s","<H1><b><center>Number not found</center></b></H1>");
			flag=0;
		}
		else
	    		numptr++;
	}
	fprintf(fptr,"</HTML>\n");
	fclose(fptr);
}

main()
{
	FILE *ptr;   //File pointer
	int x;       //Value read from file
	int idx=0;	 //Index of the array
	int val;
	int numArray[1000];	 
	int flag=1;
	
	ptr=fopen("num.txt","r");
	if (ptr == NULL)
   	{
  	    printf("Unable to too open the file\n");
  	    exit(1);
   	}

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
	
	linearSearch(numArray);
}
