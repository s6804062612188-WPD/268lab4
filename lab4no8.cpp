#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int SCORE[n];
	for (int i=0; i<n; i++){
		int score;
		scanf("%d", &score);
		SCORE[i] = score;
	}
	for (int i=0; i<n; i++){
		if (SCORE[i] > 100 or SCORE[i]<0) {
			printf("error, check input");
		} else {
			printf("%d", SCORE[i]);
			if (SCORE[i] >= 85) {
				printf("(A)");
			} else if (SCORE[i] >= 75){
				printf("(B)");
			} else if (SCORE[i] >= 68){
				printf("(C)");
			} else if (SCORE[i] >= 55){
				printf("(D)");
			} else {
				printf("(F)");
			}
		}
		printf("\n");
	}
}
