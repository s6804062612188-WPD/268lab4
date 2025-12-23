#include<stdio.h>

int main() {
	int SCORE[999];
	int count=0;
	while (true) {
		int score;
		scanf("%d", &score);
		if (score==-1) {break;}
		SCORE[count] = score;
		count++;
	}
	
	for (int i=0; i<count; i++){
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
