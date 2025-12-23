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
	
	char refGrade[5] = {'A','B','C','D','F'};
	int countGrade[5] = {0,0,0,0,0};
	for (int i=0; i<count; i++){
		if (SCORE[i] > 100 or SCORE[i]<0) {
			printf("error, check input");
		} else {
			printf("%d", SCORE[i]);
			if (SCORE[i] >= 85) {
				printf("(A)"); countGrade[0]++;
			} else if (SCORE[i] >= 75){
				printf("(B)"); countGrade[1]++;
			} else if (SCORE[i] >= 68){
				printf("(C)"); countGrade[2]++;
			} else if (SCORE[i] >= 55){
				printf("(D)"); countGrade[3]++;
			} else {
				printf("(F)"); countGrade[4]++;
			}
		}
		printf("\n");
	}
	
	printf("Grades summary:\n");
	for (int i=0; i<5; i++) {
		printf("%c(%d)\n", refGrade[i], countGrade[i]);
	}
}
