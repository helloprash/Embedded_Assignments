#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head=NULL;
    NODE  *scanPtr ;
    int count=0;
    
    int CreateList()
    {
    	NODE *temp;
    	int value;
    	temp=(NODE*)malloc(sizeof(NODE));
    	
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
    		
        printf("\nEnter the data to be stored:");
    	scanf("%d",&value);
    	temp->data=value;
    	
    	temp->next=NULL;
	return;		
    }
	
    void DisplayList()
    {
    	NODE *ptr=head;
    	printf("\nList is ");
    	if(head==NULL)
    	printf("empty");
    	else	
    	{
    		while(ptr!=NULL)
    		{
    			printf("%d ",ptr->data);
    			ptr=ptr->next;
		}
	}
    	return;
     }
	
    void AddNode(int pos)
    {
    	int i,value;
    	NODE *prevNode=head;
    	NODE *currNode,*nextNode;
    	
    	if(pos-count>=2 || pos==0)
	{
		printf("\nInvalid position\n");
	 	return;
	}
		
	currNode=(NODE*)malloc(sizeof(NODE));
		
    	if(pos==1)
    	{
    		printf("Enter the value to be stored:");
		scanf("%d",&value);
		currNode->data=value;
			
    		currNode->next=head;
    		head=currNode;
    		count++;
    	        return;
	}
		
    	for(i=1;i<pos-1;i++)
    	{
    		prevNode=prevNode->next;
	}
		
	printf("Enter the value to be stored:");
	scanf("%d",&value);
	currNode->data=value;
			
	nextNode=prevNode->next;
	prevNode->next=currNode;
	currNode->next=nextNode;
	count++;
	return;
    }
	
    void DeleteNode()
    {
    	int i,position;
    	NODE *ptr=head;
    	NODE *temp;
    	if(head==NULL)
    	{
    		DisplayList();
    		return;
	}
	printf("\nEnter the position to be deleted:");
    	scanf("%d",&position);
    	
    	if(position-count>=1 || position==0)
	{
		printf("\nInvalid position\n");
		return;
	}
		
    	if(position==1)
    	{
    		head=ptr->next;
    		ptr->next=NULL;
    		free(ptr);
    		count--;
    		printf("Done\n");
    	        return;
	}
    	for(i=1;i<position-1;i++)
    	{
    		ptr=ptr->next;
	}
	temp=ptr->next;
	ptr->next=temp->next;
	temp->next=NULL;
	free(temp);
	count--;
	printf("Done\n");
	return;
    }
	
    void DeleteList()
    {
    	if(head==NULL)
    	{
    		DisplayList();
    	        return;
	}
    	NODE *ptr=head;
    	head=NULL;
    	NODE *temp;
    	
    	while(ptr!=NULL)
    	{
    		temp=ptr->next;
    		ptr->data=0;
    		ptr->next=NULL;
    		free(ptr);
    		ptr=temp;
	}
	printf("Done\n");
    	free(ptr);
        return;
    }
	
    void SearchList()
    {
    	NODE *ptr=head;
    	int i=1,value,found=0;
    	if(head==NULL)
    	{
	        DisplayList();
    		return;
    	}
    	else
    	{
		printf("\nEnter the value to be searched:");
		scanf("%d",&value);	
			
		while(ptr!=NULL)
		{
			if(ptr->data==value)
			{
				printf("%d is found in the list at position %d\n",value,i);
				ptr=ptr->next;
				found=1;
				i++;
				continue;
			}
			else
			{
				ptr=ptr->next;
				i++;
			}
		}
		if(found!=1)
		{
			printf("%d is not found in the list\n",value);
		}
	}	
    }
	
    int DisplayMenu()
    {
    	int ch;
    	printf("----------------------------\n");
    	printf("1.Create List\n");
	printf("2.Add Node\n");
	printf("3.Delete Node\n");
	printf("4.Display List\n");
	printf("5.Delete List\n");
	printf("6.Search List\n");
	printf("7.Exit\n");
	printf("\nOption:");
	scanf("%d",&ch);
	return ch;
    }
    
    int main()
    {
        int flag ;
        int choice ;
        flag = 1 ;
        
        while (flag ==1)
        {
             choice = DisplayMenu() ;
             switch(choice)
             {  
		case 1 :
                { 
                     printf("\n----------------------------\n");
    		     printf("***Create List***\n");
                     CreateList() ;
                     count++;
                     printf("\n----------------------------\n");
                     break ;
                }
                case 2:
                {
                     printf("\n----------------------------\n");
    		     printf("***Add Node***\n");
    		     int position;
    		     printf("\nEnter the position:");
    		     scanf("%d",&position);
                     AddNode(position);
                     printf("\n----------------------------\n\n");
                     break ;
                }
                case 3:
                {
                    printf("\n----------------------------\n");
    		    printf("***Delete Node***\n");
                    DeleteNode();
                    printf("\n----------------------------\n\n");
                    break ;
                }
                case 4:
                {
                    printf("\n----------------------------\n");
    		    printf("***Display List***\n");
                    DisplayList() ;
                    printf("\n----------------------------\n\n");
                    break ;
                }
                case 5:
                {
                    printf("\n----------------------------\n");
    		    printf("***Delete List***\n");
                    DeleteList() ; /* travese through the list and remove each element by element */
                    count=0;
                    printf("\n----------------------------\n\n");
                    break ;
                }
                case 6:
                {
                    printf("\n----------------------------\n");
    		    printf("***Search List***\n");
                    SearchList();
                    printf("\n----------------------------\n\n");
                    break ;
                }
                case 7:
                {
                    flag = 0 ;
                    break ;
                }
                default:
                {
                   printf("----------------------------\n");
                   printf("Select a proper option\n");	
                   break ;
                }
             }
        }
    }
