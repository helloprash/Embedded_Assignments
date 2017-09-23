#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
    NODE  *start=NULL;
    int counter=0;
    
    void CreateList()
    {
    	int value;
    	printf("Create List\n");
    	head=(NODE*)malloc(sizeof(NODE));
    	if(start==NULL)
    		start=head;
    	
    	head->next=head;
    	scanPtr=head;
    	printf("Enter the data to be stored\n");
    	scanf("%d",&value);
    	head->data=value;
    	head->next=NULL;
    	counter++;
	}
    void AddNode()
    {
    	
	}
    void DeleteNode()
    {
    	
	}
    void DisplayList()
    {
    	
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
    	printf("1.CreateList\n");
		printf("2.AddNode\n");
		printf("3.DeleteNode\n");
		printf("4.DisplayList\n");
		printf("5.DeleteList\n");
		printf("6.SearchList\n");
		printf("7.Exit\n");
		scanf("%d",&ch);
		return ch;
	}
      
    main()
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
					flag=0;
					continue;
				}
                default:
                {
                   break ;
                }
             }
        }
    }
