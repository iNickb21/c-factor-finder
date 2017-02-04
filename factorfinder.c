#include <stdio.h>
#include <math.h>

int main()
{
	int number, sqrtNumber;

	printf("Enter Number: ");
	scanf("%d", &number);

	sqrtNumber = sqrt(number);

	printf("Factors are:\n");
	for(int i = 1; i <= sqrtNumber; i++)
		if(number % i == 0)
			printf("%d * %d\n", i, number/i);

	printf("\n");
	return 0;
}
