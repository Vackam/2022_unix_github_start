#include <stdio.h>
int add(int a, int b);
long long mul(int a, int b);
long long sub(int a, int b);

int main() {
	char s;
	int a, b;
	long long result;
	scanf("%s %d %d", &s, &a, &b);
	switch(s){
		case '+': result = add(a,b); break;
		case '-': result = sub(a,b); break;
		case '*': result = mul(a,b); break;
	}
	printf("%lld\n", result);
}
