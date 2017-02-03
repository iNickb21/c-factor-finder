#include <stdio.h>
#include <math.h>

int main()
{
	int number;

	printf("Enter Number: ");
	scanf("%d", &number);

	printf("Factors are:\n");
	for(int i = 1; i <= sqrt(number); i++)
		if(number % i == 0)
			printf("%d * %d\n", i, number/i);

	printf("\n");
	return 0;
}
