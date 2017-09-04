/*Find the largest integer among 100 array elements*/
#include<stdio.h>
main()
{
	int pointer=0,largestInteger=0;
	int array[100]; 
	
	//Fill the array with 100 elements
	array[0]=0;
	while(pointer>=0 && pointer<99) 
	{
		array[pointer+1]=array[pointer]+pointer;
		pointer++;
	}

	//Find the largestInteger of the 100 elements
	pointer=0;
	while(pointer>=0 && pointer<=99) 
	{
		if(largestInteger>array[pointer])
		{
			pointer++;
		}
		else
		{
			largestInteger=array[pointer];
			pointer++;
		}
	}
	printf("The largestInteger of 100 numbers is %d",largestInteger);
}
