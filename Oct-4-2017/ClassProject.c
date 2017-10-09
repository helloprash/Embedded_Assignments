#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
    
/*Customer usage details*/
typedef struct usage
{
    char name[25];
    int  age ;
    int usage;
    int planID ;
    float monthlyCharges ;
    struct usage *next ;
} USAGE;

typedef struct classifiedData
{
   int bracket;
   int numberOfUsers;
} CLASSIFIED;

/*Global variable declaration*/
    USAGE  *head=NULL;
    USAGE  *tail;
    float 	bracketPercent[10];
    CLASSIFIED  classify[10];

int readFileToLinkedList(char FileName[10])
{
    FILE    *FilePtr ;
    USAGE   *temp;
    int      flag=1;
    char     buffer[300];
    char    *ret;
    int      parseFlag=1;
    int      tokenNo=0;
    
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
	    {
		  head=temp;
		  tail=temp;
	    }
    	    else
    	    {
    		  tail->next=temp;
    		  tail=temp;
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
}

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

float PlanONE(int usageHours)
{
    int     BaseCharges=100;
    int     FreeUsage_Hrs=50;
    float   TotalCharges;
    float   Charges;
    int     hours;
	
	if(usageHours<=FreeUsage_Hrs)
		return BaseCharges;
		
	hours=usageHours-FreeUsage_Hrs;
	
	if(hours>100)
	{
		Charges=100*50;
		hours-=100;
	}
	else
	{
		Charges=hours*50;
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>100)
	{
		Charges=Charges+(100*55);
		hours-=100;
	}
	else
	{
		Charges=Charges+(hours*55);
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>0)
		Charges=Charges+(hours*60);
		
	Charges/=100;
	TotalCharges=Charges+BaseCharges;
	return TotalCharges;
}

float PlanTWO(int usageHours)
{
    int     BaseCharges=300;
    int     FreeUsage_Hrs=75;
    float   TotalCharges;
    float   Charges;
    int     hours;
	
	if(usageHours<=FreeUsage_Hrs)
		return BaseCharges;
		
	hours=usageHours-FreeUsage_Hrs;
	
	if(hours>100)
	{
		Charges=100*45;
		hours-=100;
	}
	else
	{
		Charges=hours*45;
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>100)
	{
		Charges=Charges+(100*50);
		hours-=100;
	}
	else
	{
		Charges=Charges+(hours*50);
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>0)
		Charges=Charges+(hours*55);
		
	Charges/=100;
	TotalCharges=Charges+BaseCharges;
	return TotalCharges;
}

float PlanTHREE(int usageHours)
{
    int     BaseCharges=400;
    int     FreeUsage_Hrs=90;
    float   TotalCharges;
    float   Charges;
    int     hours;
	
	if(usageHours<=FreeUsage_Hrs)
		return BaseCharges;
		
	hours=usageHours-FreeUsage_Hrs;
	
	if(hours>100)
	{
		Charges=100*45;
		hours-=100;
	}
	else
	{
		Charges=hours*45;
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>100)
	{
		Charges=Charges+(100*50);
		hours-=100;
	}
	else
	{
		Charges=Charges+(hours*50);
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>0)
		Charges=Charges+(hours*55);
		
	Charges/=100;
	TotalCharges=Charges+BaseCharges;
	return TotalCharges;
}

float PlanFOUR(int usageHours)
{
    int     BaseCharges=500;
    int     FreeUsage_Hrs=100;
    float   TotalCharges;
    float   Charges;
    int     hours;
	
	if(usageHours<=FreeUsage_Hrs)
		return BaseCharges;
		
	hours=usageHours-FreeUsage_Hrs;
	
	if(hours>100)
	{
		Charges=100*40;
		hours-=100;
	}
	else
	{
		Charges=hours*40;
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>100)
	{
		Charges=Charges+(100*50);
		hours-=100;
	}
	else
	{
		Charges=Charges+(hours*50);
		Charges/=100;
		TotalCharges=Charges+BaseCharges;
		return TotalCharges;
	}
	
	if(hours>0)
		Charges=Charges+(hours*30);
		
	Charges/=100;
	TotalCharges=Charges+BaseCharges;
	return TotalCharges;
}

float DoBilling()
{
    USAGE *ptr=head;
    float charges;
    float (*arrayfxnpointer[4])(int);
	
	arrayfxnpointer[0] = &PlanONE ;
 	arrayfxnpointer[1] = &PlanTWO ;
 	arrayfxnpointer[2] = &PlanTHREE ;
 	arrayfxnpointer[3] = &PlanFOUR ;
	
	while(ptr!=NULL)
	{
		charges=(*arrayfxnpointer[(ptr->planID)-1])(ptr->usage);
		ptr->monthlyCharges=charges;
		ptr=ptr->next;
	}
}

/*To write the classified data into a CSV file*/
int writeToCsv()
{
    FILE *ptr;
    FILE *newPtr;
    USAGE *nodePtr=head;
    int idx=0;
		
	ptr=fopen("outputCsvFile.csv","w");
	fprintf(ptr,"Bracket,numberOfUsers\n");
	for(idx=0;idx<10;idx++)
	{
	    fprintf(ptr,"%d%%,",classify[idx].bracket);
	    fprintf(ptr,"%d\n",classify[idx].numberOfUsers);
	}
	fclose(ptr);
	
	newPtr=fopen("Bill.html","w");
	fprintf(newPtr,"<html>");
	fprintf(newPtr,"<head>");
	fprintf(newPtr,"<style>");
	fprintf(newPtr,"table, th, td { border: 1px solid black; border-collapse: collapse; }");
	fprintf(newPtr,"</style>");
	fprintf(newPtr,"</head>");
	fprintf(newPtr,"<body>");
	fprintf(newPtr,"<meta http-equiv=\"refresh\" content=\"1\">\n");
	fprintf(newPtr,"<table style=width:100%>");
	fprintf(newPtr,"<tr>");
	fprintf(newPtr,"<th>Name</th><th>Usage(Hrs)</th><th>PlanID</th><th>Bill</th>");
	fprintf(newPtr,"</tr>");
	while(nodePtr!=NULL)
	{
		fprintf(newPtr,"<tr>");
		fprintf(newPtr,"<td>%s</td>",nodePtr->name);
		fprintf(newPtr,"<td>%d</td>",nodePtr->usage);
		fprintf(newPtr,"<td>%d</td>",nodePtr->planID);
		fprintf(newPtr,"<td>Rs.%f</td>",nodePtr->monthlyCharges);
		fprintf(newPtr,"</tr>");
		nodePtr=nodePtr->next;
	}
	fprintf(newPtr,"</table>");
	fprintf(newPtr,"</body>");
	fprintf(newPtr,"</html>");
	fclose(newPtr);
}

main(int argc, char **argv)
{
    char     FileName[10];
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

  	readFileToLinkedList(FileName);
 	
 	maxUsage=FindMaxUsage();
 	
 	PercentOfMax(maxUsage);
 	
 	ClassifyData();
 	
 	DoBilling();
 	
 	writeToCsv();
}
