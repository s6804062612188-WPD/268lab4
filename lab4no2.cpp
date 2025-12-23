#include <stdio.h>

int main() {
	int num, lineCount=0;
	printf("Enter an integer between 1 and 100: ");
	scanf("%d", &num);
	
	while (num>0) {
		printf("%4d", num);
		num = num-2;
		lineCount = lineCount+1;
		if (lineCount==10) {
			printf("\n");
			lineCount = 0;
		}
	}
	printf("\n");
}
