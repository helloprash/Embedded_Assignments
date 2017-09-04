//To concatenate two strings
#include<stdio.h>
#include<string.h>
main()
{
	char firstName[]="Prashanth";
	printf("FirstName is: %s",firstName);
	char lastName[]="Kumar";
	printf("\nLastName is: %s",lastName);
	strcat(firstName,lastName);
	printf("\nName is: %s",firstName);
}
