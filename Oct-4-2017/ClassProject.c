#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Customer usage details*/
typedef struct usage
{
    char name[10];
    int  age ;
    int usage;
    int planID ;
    struct usage *next ;
} USAGE;

typedef struct classifiedData
{
   int bracket;
   int numberOfUsers;
} CLASSIFIED;

/*Global variable declaration*/
    USAGE  *head=NULL;
    USAGE  *scanPtr ;
    float 	bracketPercent[10];
    CLASSIFIED  classify[10];

/*To find the max usage*/
int FindMaxUsage()
{
   USAGE *ptr=head;
   int max;
	
      max=ptr->usage;
      while(ptr!=NULL)
      {
	  if(ptr->usage>=max)
	  {
	  	 max=ptr->usage;
	  }
	  ptr=ptr->next;
      }
      return max;
}

/*To calculate various percentages of the maximum value*/
int PercentOfMax(float maxUsage)
{
    int percent=10;
    float bracketUsage;
    int idx;
	
        for(idx=0;idx<10;idx++)
	{
	    bracketUsage=(maxUsage*percent)/100;
	    bracketPercent[idx]=bracketUsage;
	    percent+=10;
	}
}

/*To classify the data based on the number of users in each percentage bracket*/
int ClassifyData()
{
    USAGE   *ptr=head;
    int      idx; 
    int      percent=10;
	
	  for(idx=0;idx<10;idx++)
	  {
	      classify[idx].bracket=percent;
	      percent+=10;
	  }
	  while(ptr!=NULL)
	  {
	      percent=10;
	      for(idx=0;idx<10;idx++)	
	      {
		  if(bracketPercent[idx]<ptr->usage)
  	   	       percent+=10;
  	   	  else
  	   	  {
  	   		classify[idx].numberOfUsers++;
  	   		break;
		  }
  	      }
  	      ptr=ptr->next;
  	   }
}

/*To write the classified data into a CSV file*/
int writeToCsv()
{
    FILE *ptr;
    int idx=0;
		
	ptr=fopen("outputCsvFile.csv","w");
	fprintf(ptr,"Bracket,numberOfUsers\n");
	for(idx=0;idx<10;idx++)
	{
	    fprintf(ptr,"%d%%,",classify[idx].bracket);
	    fprintf(ptr,"%d\n",classify[idx].numberOfUsers);
	}
	fclose(ptr);
}

main(int argc, char **argv)
{
    FILE    *FilePtr ;
    USAGE   *temp;
    char     FileName[10];
    int      flag=1;
    char     buffer[300];
    char    *ret;
    int      parseFlag=1;
    int      tokenNo=0;
    int      maxUsage;
	
	if (argc >1 )
  	{
  	    strcpy(FileName,argv[1]);
  	}
  	else
  	{
    	    printf("Wrong command line arguments\n");
    	    exit(1);
  	}

  	FilePtr = fopen(FileName,"r");

   	if(FilePtr == NULL)
   	{
    	    printf("Unable to open the CSV file \n");
    	    exit(1);
   	}
   	
	fgets(buffer,300,FilePtr);
	
   	while(flag)
   	{
   	    if (fgets(buffer,300,FilePtr) == NULL)
     	    {
       		  flag = 0 ;
       		  continue ;
     	    }
     	
     	    temp=(USAGE*)malloc(sizeof(USAGE));
     	
     	    if(head==NULL)
		 head=temp;
    	    else
    	    {
    		 scanPtr=head;  //scanPtr has the address of the previous node
    		 while(scanPtr->next!=NULL)
    		 {
    		       scanPtr=scanPtr->next;
		 }
		 scanPtr->next=temp;
	    }
		
     	    ret=strtok(buffer,",");
     	    strcpy(temp->name,ret);
     	    temp->next=NULL;
     	    tokenNo++;
     	
   	    parseFlag=1;
     	    while(parseFlag)
     	    {
     		 ret=strtok(NULL,",");
     		 if(ret==NULL)
     		 {
     		     parseFlag=0;
     	             tokenNo=0;
     	             continue;
            	 }
 	         switch(tokenNo)
 	         {
 		      case 1:
		      {
 	                   temp->age=atoi(ret);
		           break;
		      }
		      case 2:
		      {
                           temp->usage=atoi(ret);
			   break;
		      }
		      case 3:         
		      {
			   temp->planID=atoi(ret);
			   break;
		      }
		      default :
                      {
                           printf("Extra values found in the line %s \n", ret);
                      }
	         }
 		 tokenNo++;
 	    }
 	}
 	fclose(FilePtr);
 	
 	maxUsage=FindMaxUsage();
 	
 	PercentOfMax(maxUsage);
 	
 	ClassifyData();
 	
 	writeToCsv();
  }
