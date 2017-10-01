#include<stdio.h>
#include<malloc.h>
typedef struct node 
    {
       int data ;
       struct node *left ;
       struct node *right ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head=NULL;
    NODE  *scanPtr ;
    int count=0;
    
    void CreateList()
    {
    	NODE *temp;
    	int value;
    	temp=(NODE*)malloc(sizeof(NODE));
    	
    	if(head==NULL)
	{
	  	head=temp;
		temp->left=NULL;
	}
	else
	{
		scanPtr=head;
		while(scanPtr->right!=NULL)
    		{
    			scanPtr=scanPtr->right;
		}
		scanPtr->right=temp;
		temp->left=scanPtr;
	}
		
	printf("\nEnter the data to be stored:");
    	scanf("%d",&value);
    	temp->data=value;
    	
	temp->right=NULL;
 	count++;
	return;
     }
	
     void DisplayForward()
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
    	             ptr=ptr->right;
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
			
	        head->left=currNode;
    		currNode->right=head;
    		currNode->left=NULL;
    		head=currNode;
    		count++;
    	        return;
        }
		
    	for(i=1;i<pos-1;i++)
    	{
    		prevNode=prevNode->right;
        }
		
        printf("Enter the value to be stored:");
        scanf("%d",&value);
        currNode->data=value;
			
        nextNode=prevNode->right;
        prevNode->right=currNode;
        currNode->right=nextNode;
        currNode->left=prevNode;
        if(nextNode!=NULL)
                nextNode->left=currNode;
        count++;
        return;
     }
	
     void DeleteNode()
     {
        int i,position;
    	NODE *ptr=head;
    	NODE *temp;
    	NODE *temp1;
    	if(head==NULL)
    	{
    		DisplayForward();
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
    		head=ptr->right;
    		head->left=NULL;
    		ptr->right=NULL;
    		free(ptr);
    		count--;
    		printf("Done\n");
    	        return;
        }
    	for(i=1;i<position-1;i++)
    	{
    		ptr=ptr->right;
        }
        temp=ptr->right;
        temp1=temp->right;
        ptr->right=temp1;
        if(temp->right!=NULL)
        {
	       temp1->left=ptr;
        }
        temp->right=NULL;
        temp->left=NULL;
        free(temp);
        count--;
        printf("Done\n");
        return;
     }
	
     void DisplayReverse() 
     {
        NODE *ptr=head;
    	printf("\nList is ");
    	if(head==NULL)
    		printf("empty");
    	else	
        {
                while(ptr->right!=NULL)
                {
                       ptr=ptr->right;
                }
                while(ptr!=head)
                {
                       printf("%d ",ptr->data);
                       ptr=ptr->left;
                }
                printf("%d ",ptr->data);
        }
    	        return;
     }
	
     void DeleteList()
     {
	if(head==NULL)
    	{
               DisplayForward();
    	       return;
        }
    	NODE *ptr=head;
    	head=NULL;
    	NODE *temp;
    	
    	while(ptr!=NULL)
    	{
    		temp=ptr->right;
    		ptr->data=0;
    		ptr->right=NULL;
    		ptr->left=NULL;
    		free(ptr);
    		ptr=temp;
        }
        printf("Done\n");
     }
	
     void SearchList()
     {
        NODE *ptr=head;
    	int i=1,value,found=0;
    	if(head==NULL)
    	{
                DisplayForward();
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
                                printf("\n%d is found in the list at position %d\n",value,i);
		                ptr=ptr->right;
	                        found=1;
	                        i++;
	                        continue;
                        }
                        else
                        {
                                ptr=ptr->right;
                                i++;
                        }
                }
	        if(found!=1)
                {
                        printf("\n%d is not found in the list\n",value);
                }
        }	
      }
	
      int DisplayMenu()
      {
                int ch;
		printf("----------------------------\n");
                printf("1.CreateList\n");
		printf("2.AddNode\n");
		printf("3.DeleteNode\n");
		printf("4.DisplayForward\n");
		printf("5.DisplayReverse\n");
		printf("6.DeleteList\n");
		printf("7.SearchList\n");
		printf("8.Exit\n");
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
             {  case 1 :
                { 
                     printf("\n----------------------------\n");
                     printf("***Create List***\n");
                     CreateList() ;
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
                     printf("\n----------------------------\n");
                     break ;
                }
                case 3:
                {
                     printf("\n----------------------------\n");
                     printf("***Delete Node***\n");
                     DeleteNode();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 4:
                {
                     printf("\n----------------------------\n");
                     printf("***Display List Forward***\n");
                     DisplayForward() ;
                     printf("\n----------------------------\n");
                     break ;
                }
                case 5:
                {
                     printf("\n----------------------------\n");
                     printf("***Display List Reverse***\n");
                     DisplayReverse() ;
                     printf("\n----------------------------\n");
                     break ;
                }
                case 6:
                {
                     printf("\n----------------------------\n");
                     printf("***Delete List***\n");
                     DeleteList() ; /* travese through the list and remove each element by element */
                     printf("\n----------------------------\n");
                     break ;
                }
                case 7:
                {
                     printf("\n----------------------------\n");
                     printf("***Search List***\n");
                     SearchList();
                     printf("\n----------------------------\n");
                     break ;
                }
                case 8:
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
