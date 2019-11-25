#include <stdio.h>
#include <math.h>

int main() {
	int a, b, grad;
	float rad;

	printf("Task 1. Enter two numbers: ");
	scanf("%d %d", &a, &b); 
	
	printf("Addition: %d\n", a + b);
	printf("Difference: %d\n", a - b);
	printf("Multiplication: %d\n", a * b);
	printf("Division: %.2f\n", (float) a / (float) b);

	printf("Task 2. Enter an angle: ");
	scanf("%d", &grad);
	rad = (grad * M_PI / 180);
	printf("Sin: %.3f Cos: %.3f\n", sin(rad), cos(rad));
}