<<<<<<< HEAD
=======
#include <stdlib.h>
>>>>>>> 8a123b8ee34cfb483c9d9c19a0fa5c32cf1a8459
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
<<<<<<< HEAD
*main: Entry point
=======
*main - Entry point
>>>>>>> 8a123b8ee34cfb483c9d9c19a0fa5c32cf1a8459
*Return: Always 0 (success)
*/
int main(void)
{
<<<<<<< HEAD
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
=======
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
>>>>>>> 8a123b8ee34cfb483c9d9c19a0fa5c32cf1a8459
}
