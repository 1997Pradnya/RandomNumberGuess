#include<stdio.h>   // for printf(),scanf() function
#include<stdlib.h>  // for random number generation
#include<time.h>    // for provide new random number with time generation

int main()
{
	int RandomNumber,GuessNumber,Attempt=1;
	
	srand(time(0));   //it return time in (0) second and provide new random number
	
    RandomNumber = rand()%100 + 1; // its provide random number in (1 to 100)
	
	//printf("The RandomNumber Number is : %d\n");
	
	do
	{
		printf("Enter the Number in between 1 to 100 to guess random Number: \n");
		
		scanf("%d",&GuessNumber);
		
		if(GuessNumber > RandomNumber)
		{
			printf("Lower Number please\n");
		}
		else if(GuessNumber < RandomNumber)
		{
			printf("Higher Number please\n");
		}
		else
		{
			printf("you Guessed Random Number in %d attempt",Attempt);
		}
		 Attempt++;	
		 
	}while(GuessNumber != RandomNumber);
	
	
	return 0;
}

