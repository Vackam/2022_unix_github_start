#include <stdio.h>
int add(int a, int b);
long long mul(int a, int b);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d + %d = %lld\n", a, b, mul(a, b));
}

