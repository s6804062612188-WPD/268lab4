#include <stdio.h>

int main() {
	char n; int r;
	scanf("%s %d", &n,&r);
	char s[r];
	for (int i=0; i<r; i++) {
		s[i] = n;
	}
	for (int i=0; i<r; i++) {
		printf("%s\n", s);
	}
}
