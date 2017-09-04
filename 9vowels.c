//To find the number of vowels in the given sentence
#include<stdio.h>
main()
{
	int n=0,vowels=0;
	char character; 
	char sentence[100];
	scanf("%[^\n]s",&sentence); 
	character=sentence[0];
	while(character!='\0')
	{
		if(character=='a'|| character=='e'||character=='i'||character=='o'||character=='u')
		{
			vowels++;
		}
		n++;	
		character=sentence[n];
	}
		printf("\nvowels %d",vowels);
}
