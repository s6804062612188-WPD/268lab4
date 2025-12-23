#include <stdio.h>

int main() {
	char n; int r;
	scanf("%c %d", &n,&r);
	for (int i=1; i<=r; i++) {
		printf("%c", n);
	}
	printf("\n");
}
