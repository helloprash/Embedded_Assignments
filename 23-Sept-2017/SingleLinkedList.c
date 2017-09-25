#include<stdio.h>
typedef struct node 
    {
       int data ;
       struct node *next ;
    } NODE ;
    
    /* Declare head of the list as a Global Variable */
    NODE  *head ;
    NODE  *scanPtr ;
    
    void CreateList()
    {
    
	}
    void AddNode()
    {
    	
	}
    void DeleteNode()
    {
    	
	}
    void DisplayList()
    {
    	printf("\n----------------------------\n");
    	printf("List is empty\n");
    	printf("----------------------------\n\n");
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
                   break ;
                }
             }
        }
    }
