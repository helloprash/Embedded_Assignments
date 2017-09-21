#include<stdio.h>
#include<stdlib.h>

int Sort(int a[],int length)
{
    int *ptr1;
    int *ptr2;
    int temp; /* Temporary variable for swapping */
    int i ; /* Indicate my left hand pointer to the array */
    int j ; /* Indicate my right hand pointer to the array */
    
    for (i=0; i < length -1 ; i++)
    {
       ptr1=a;
       ptr1+=i;
       for (j=i+1; j < length ; j++)
       {
       	 ptr2=a;
       	 ptr2+=j;
         if (*ptr1 > *ptr2 )
         {
             temp = *ptr1;
             *ptr1 = *ptr2;
             *ptr2 = temp ;
         }
       }
     }	
     PrintArray(a,length);
}

int PrintArray(int arr[],int len)
{
	FILE *fptr;
	int *ptr;
	fptr=fopen("sort.html","w");
	int idx;
	fprintf(fptr,"%s","<HTML>");
	fprintf(fptr,"<meta http-equiv=\"refresh\" content=\"1\">\n");
	fprintf(fptr,"<H1> Result of computation </H1>\n"); 
	for(idx=0;idx<len;idx++)
	{
		ptr=arr;
		ptr+=idx;
		fprintf(fptr,"%d\n",*ptr);
	}
	fprintf(fptr, "</p>");
	fprintf(fptr,"%s","</HTML>");
	fclose(fptr);
	return;
}

main()
{
	FILE *ptr;   	//File pointer
	int x;       	//Value read from file
	int idx=0;	 	//Index of the array
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
	
	Sort(numArray,idx);
	fclose(ptr);
}
