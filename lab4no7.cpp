#include <stdio.h>

int main() {
	char n; int r, c;
	scanf("%c %d %d", &n,&c,&r);
	char s[r];
	for (int i=0; i<c; i++) {
		s[i] = n;
	}
	for (int i=0; i<r; i++) {
		printf("%s\n", s);
	}
}
