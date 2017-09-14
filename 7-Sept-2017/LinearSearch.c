#include<stdio.h>

int linearSearch(int array[])
{
	int num;    		//Number to be searched
	int idx;    		//Index of the array
	FILE *fptr; 		//File pointer
	
	fptr=fopen("linear.html","w");
	fprintf(fptr,"<HTML>\n");
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
	for(idx=0;idx<1000;idx++)
	{
		if(array[idx]==num)
		{
			fprintf(fptr,"%s","<H1><b><center>Number Found!!</center></b></H1>");
			break;
		}
		else if(idx==999)
		{
			fprintf(fptr,"%s","<H1><b><center>Number not found</center></b></H1>");
		}
	}
	fprintf(fptr,"<HTML>\n");
	fclose(fptr);
}

main()
{
	FILE *ptr;   	 //File pointer
	int x;       	 //Value read from file
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
	fclose(ptr);
}
