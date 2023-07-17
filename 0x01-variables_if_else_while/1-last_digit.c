#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - determians if that random number is +/-/0
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
    int last ;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last= n %10;
	if(last>5)
	{
	    printf("Last digit of %d is %d and is greater than 5",n,last);
	}
	else if(last==0)
	{
	    printf("Last digit of %d is %d and is 0",n,last);
	}
	if(last<6)
	{
	    printf("Last digit of %d is %d and is less than 6 and not 0",n,last);
	}
	return (0);
}
