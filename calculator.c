//4 function integer calculator

#include <stdio.h>

int addition(x, y);
int subtraction(x, y);
int multiplication(x, y);
int division(x,y);

int main()
{
	int a, b, menu;
	do
	{
		printf("0. EXIT\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		scanf("%d", &menu);

		switch (menu)
		{
			case 1:
				printf("Enter integer 1: ");
				scanf("%d", &a);
				prinft("Enter integer 2: ");
				scanf("%d", &b);
				printf("SUM: %d\n", addition(a, b);
				break;
			case 2:
				printf("Enter integer 1: ");
				scanf("%d", &a);
				prinft("Enter integer 2: ");
				scanf("%d", &b);
				printf("DIFFERENCE: %d\n", subtraction(a, b);
				break;
			case 3:
				printf("Enter integer 1: ");
				scanf("%d", &a);
				prinft("Enter integer 2: ");
				scanf("%d", &b);
				printf("PRODUCT: %d\n", multiplication(a, b);
				break;
			case 4:
				printf("Enter integer 1: ");
				scanf("%d", &a);
				prinft("Enter integer 2: ");
				scanf("%d", &b);
				printf("QUOTIENT: %d\n", division(a, b);
				break;
			case 0:
				menu = 0;
				break;
		}
	}
	while (menu != 0);

	return 0;
}

int addition(x, y)
{
	return 0;
}

int subtraction(x, y)
{
	return 0;
}

int multiplication(x, y)
{
	return 0;
}

int division(x,y)
{
	return 0;
}

