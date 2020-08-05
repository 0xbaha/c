#include<stdio.h>
#define PI 3.14

int main () {
	float radius, keliling;

	printf("masukkan radius: ");
	scanf ("%f", &radius);

	keliling = 2*PI*radius;
	printf("keliling lingkaran: %.2f", keliling);

	return 0;

}
