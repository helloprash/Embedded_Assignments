#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int strTok(char *input, const char delimiter,char *token) 
{
   /* if the function has hit the end of string it wil
      return ZERO otherwise 1 */
   static char *buffer ;
   static int  position ;
   int idx ;
   int flag ;
   if (input != NULL)
   {
       buffer = input ;
       position = 0 ;
       flag = 1 ;
       /* Search for the delimiter and return */
       while(flag)
       {
          if (buffer[position] == delimiter)
          {
              /* We had found the token */
              for (idx = 0 ; idx < position;idx++)
              {
                 token[idx] = buffer[idx];
              }
              token[idx] = '\0';
              return token;
          }
          if (buffer[position] == '\0')
          {
             return 0;
          }
          position++ ;
       }
   }
   else
   {
      /* Repeated call */
      if (buffer == NULL)
      {
        token = NULL ;
         return 0 ;
      }
      /* Search for the delimiter and return */
   }
}

main()
{
	FILE *ptr;
	int flag=1;
	char buff[300];
	char token[300];
	char *ret;
	char delim=',';
	int parseFlag=1;
	
	ptr=fopen("read.csv","r");
	 if(ptr == NULL)
   {
      printf("Unable to open the file\n");
      exit(1);
   }

   while(flag)
   {
   	 if (fgets(buff,300,ptr) == NULL)
     {
       flag = 0 ;
       continue ;
     }
     ret=strTok(buff,delim,token);
     printf("%s",ret);
   	 parseFlag=1;
     while(parseFlag)
     {
     	ret=strTok(*ret,delim,token);
     	if(ret==NULL)
     	{
     		parseFlag=0;
     		continue;
 		}
     	 printf("%s",ret);
	 }
   }
   fclose(ptr);
}
