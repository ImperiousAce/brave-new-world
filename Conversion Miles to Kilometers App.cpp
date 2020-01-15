
#include <stdio.h>

int main(void) {
	float miles;

	printf("Please eneter miles:");
	scanf_s("%f", &miles);

	float kilometers = miles * 1.6;

	printf("%f Kilometers", kilometers);
}