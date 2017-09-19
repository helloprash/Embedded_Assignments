#include<stdio.h>
#include<stdlib.h>
#define size 5

int array[size];
int head=0,tail=0;

/*Adding to the Queue*/
int AddQueue()
{
		int idx;
		int val;
		printf("Enter the value:");
		scanf("%d",&val);
		array[tail]=val;
		printf("Queue contents : ");
		for(idx=head;idx<=tail;idx++)
		{
			printf("%d ",array[idx]);
		}
		tail++;
		printf("\n\n");
}

/*Deleting from the Queue*/
int DeleteQueue()
{		
		int idx;
		head++;
		printf("Queue contents : ");
		for(idx=head;idx<tail;idx++)
		{
			printf("%d ",array[idx]);
		}
		printf("\n\n");
}

main()
{
	int ch;
	int flag=1;
	
	while(flag)
	{
		printf("1)Add 2)Delete 3)Exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:{	
					     if((tail-head)==size || (head-tail)==1)
					     {
					      	printf("Queue is full\n");
					      	flag=0;
					      	continue;
				      	}
				      	else
				        AddQueue();
			  	    	break;
			  	  }
		case 2:{
					      if(head==tail)
				      	{
					       	printf("Queue is empty\n");
					      	flag=0;
					      	continue;
					      }
				      	else
				      	DeleteQueue();
					      break;
			     }
		case 3:{
					      flag=0;
					      break;
			     }
		default:    break;
		}	
	}
}
