#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int divisor = 2;
	int sum = 0;
	if (a % divisor == 0) {
		sum++;
	}
	if (b % divisor == 0) {
		sum++;
	}
	if (c % divisor == 0) {
		sum++;
	}
	if (d % divisor == 0) {
		sum++;
	}
	printf("%d", sum);
	return 0;
}