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
    
    int CreateList()
    {
    	NODE *temp;
    	printf("\n----------------------------\n");
    	printf("***Create List***\n");
    	int value;
    	temp=(NODE*)malloc(sizeof(NODE));
    	
    	if(head==NULL)
			head=temp;
    	else
    		scanPtr->next=temp;  //scanPtr has the address of the previous node
    		
    	scanPtr=temp;            //scanPtr has the address of the present node
		printf("Enter the data to be stored:");
    	scanf("%d",&value);
    	temp->data=value;
    	temp->next=NULL;		
    		
    	printf("\n----------------------------\n");
	}
    void AddNode()
    {
    	
	}
    void DeleteNode()
    {
    	
	}
    void DisplayList()
    {
    	NODE *temp=head;
    	printf("\n----------------------------\n");
    	printf("***Display List***\n");
    	printf("List is ");
    	if(head==NULL)
    		printf("empty");
    	else	
    		{
    			while(temp->next!=NULL)
    			{
    				printf("%d ",temp->data);
    				temp=temp->next;
				}
				printf("%d ",temp->data);
			}
    	printf("\n----------------------------\n\n");
    	return;
	}
    void DeleteList()
    {
    	
	}
    void SearchList()
    {
    	
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
             {  case 1 :
                { 
                     CreateList() ;
                     break ;
                }
                case 2:
                {
                     AddNode();
                     break ;
                }
                case 3:
                {
                     DeleteNode();
                     break ;
                }
                case 4:
                {
                    DisplayList() ;
                    break ;
                }
                case 5:
                {
                     DeleteList() ; /* travese through the list and remove each element by element */
                     break ;
                }
                case 6:
                {
                    SearchList();
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
