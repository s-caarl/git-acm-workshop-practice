#include <stdio.h>

float math_function(float x)
{
	return 0;
}

int main()
{
	int boundA, boundB;
	float dx;

	printf("Enter your bounds (a, b): ");
	scanf("%d, %d", &boundA, &boundB);
	printf("Enter your dx: ");
	scanf("%f", &dx);

	float integral = 0;
	for (float x = boundA; x < boundB; x += dx)
	{
		integral += math_function(x) * dx;
	}

	printf("Integral between %d and %d with dx of %f is: %f\n", boundA, boundB, dx, integral);
	return 0;
}
