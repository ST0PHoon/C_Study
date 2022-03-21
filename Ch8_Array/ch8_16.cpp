#include <stdio.h>

int main () {
	int subjectNum=0, studentNum=0;
	
	printf("과목 수 입력: ");
	scanf("%d",&subjectNum);
	
	printf("학생 수 입력: ");
	scanf("%d",&studentNum);
	
	int score[studentNum][subjectNum]={0};
	int sumStudent[studentNum]={0};
	int sumSubject[subjectNum] = {0};
	float avgStudent[studentNum] = {0};
	float avgSubject[subjectNum] = {0};
	
	for (int i=1; i <= studentNum; i++ ) {
		printf("Koposw%d 학생의 점수 %d개를 차례대로 입력하세요: ",i,subjectNum);
		
		for ( int j = 0; j < subjectNum; j++ ) {
			scanf("%d", &score[i-1][j]);
		}
	}
	
	for (int i=1; i <= studentNum; i++) {
		for (int j=0;j<subjectNum;j++) {
			sumStudent[i-1] += score[i-1][j]; // i번째 학생의 성접 입력  
			sumSubject[j] += score[i-1][j]; // 1과목의 성정 배분 
		}
		avgStudent[i-1] = sumStudent[i-1] / (float)subjectNum;
		printf("Koposw%d 학생의 총점: %d, 평균: %5.2f\n",i,sumStudent[i-1],avgStudent[i-1]);
	}
	
	for (int i =1; i<=subjectNum; i++) {
		avgSubject[i-1] = sumSubject[i-1] / (float)studentNum;
		printf("%d번쨰 과목의 총점: %d, 평균: %5.2f\n",i,sumSubject[i-1],avgSubject[i-1] );
	}

	return 0;
}

