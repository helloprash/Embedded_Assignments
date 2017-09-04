/*Find the smallest integer among 100 array elements*/
#include<stdio.h>
main()
{
	int pointer=0,smallestInteger;
	int array[100]; 
	
	//Fill the array with 100 elements
	array[0]=1;array[1]=0;
	while(pointer>=0 && pointer<99) 
	{
		array[pointer+2]=array[pointer+1]+pointer;
		array[pointer+1]=array[pointer]+pointer;
		printf("value at %d is %d\n",pointer,array[pointer]);
		pointer++;
	}

	//Find the smallestInteger of the 100 elements
	pointer=0;
	while(pointer>=0 && pointer<=99) 
	{
		if(smallestInteger<array[pointer])
		{
			pointer++;
		}
		else
		{
			smallestInteger=array[pointer];
			pointer++;
		}
	}
	printf("The smallestInteger of 100 numbers is %d",smallestInteger);
}
