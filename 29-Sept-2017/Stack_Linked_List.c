#include<stdio.h>
#include<malloc.h>

void Push();
void Pop();
void Display();
void Search();

typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the stack as a Global Variable */
    NODE  *head=NULL;
    NODE  *scanPtr ;
    
    void Push()
    {
      NODE *temp;
      int value;
        temp=(NODE*)malloc(sizeof(NODE));
    		
		    printf("\nEnter the data to be pushed:");
    	  scanf("%d",&value);
    	  temp->data=value;
    	
    	  scanPtr=head;
    	  head=temp;
    	  temp->next=scanPtr;
		    return;		
	  }
	
	  void Pop()
	  {
		  NODE *ptr=head;
		
		    if(head==NULL)
		    {
			      Display();
			      return;
		    }
    	  head=ptr->next;
    	  free(ptr);
    	  Display();
    	  return;
	  }
	
	  void Display()
	  {
		  NODE *ptr=head;
      
        printf("\nStack contents: ");
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
	
	  void Search()
	  {
		  NODE *ptr=head;
        int i=1,value,found=0;
    	  if(head==NULL)
    	  {
			      Display();
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
				        }
				        else
				        {
					          ptr=ptr->next;
					          i++;
				        }
			      }
			      if(found!=1)
				        printf("\n%d is not found in the list\n",value);
		    }	
	  }
	
	  int DisplayMenu()
	  {
		  int ch;
		    printf("----------------------------\n");
    	  printf("1.Push\n");
		    printf("2.Pop\n");
		    printf("3.Display\n");
		    printf("4.Search\n");
		    printf("5.Exit\n");
		    printf("\nOption:");
		    scanf("%d",&ch);
		    return ch;
	  }
    int main()
    {
        int flag ;
        int choice ;
        
        flag = 1 ;
        
        while (flag)
        {
             choice = DisplayMenu() ;
             switch(choice)
             {  
                case 1 :
                { 
                     printf("\n----------------------------\n");
                     printf("***Push***\n");
                     Push() ;
                     Display();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 2:
                {
                     printf("\n----------------------------\n");
    				         printf("***Pop***\n");
                     Pop();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 3:
                {
                	   printf("\n----------------------------\n");
    				         printf("***Display***\n");
                     Display();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 4:
                {
                	   printf("----------------------------\n");
    				         printf("***Search List***\n");
                     Search();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 5:
                {
                     flag=0;
                	   break;
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
