#include <stdio.h>

int main () {
	int subjectNum=0, studentNum=0;
	
	printf("���� �� �Է�: ");
	scanf("%d",&subjectNum);
	
	printf("�л� �� �Է�: ");
	scanf("%d",&studentNum);
	
	int score[studentNum][subjectNum]={0};
	int sumStudent[studentNum]={0};
	int sumSubject[subjectNum] = {0};
	float avgStudent[studentNum] = {0};
	float avgSubject[subjectNum] = {0};
	
	for (int i=1; i <= studentNum; i++ ) {
		printf("Koposw%d �л��� ���� %d���� ���ʴ�� �Է��ϼ���: ",i,subjectNum);
		
		for ( int j = 0; j < subjectNum; j++ ) {
			scanf("%d", &score[i-1][j]);
		}
	}
	
	for (int i=1; i <= studentNum; i++) {
		for (int j=0;j<subjectNum;j++) {
			sumStudent[i-1] += score[i-1][j]; // i��° �л��� ���� �Է�  
			sumSubject[j] += score[i-1][j]; // 1������ ���� ��� 
		}
		avgStudent[i-1] = sumStudent[i-1] / (float)subjectNum;
		printf("Koposw%d �л��� ����: %d, ���: %5.2f\n",i,sumStudent[i-1],avgStudent[i-1]);
	}
	
	for (int i =1; i<=subjectNum; i++) {
		avgSubject[i-1] = sumSubject[i-1] / (float)studentNum;
		printf("%d���� ������ ����: %d, ���: %5.2f\n",i,sumSubject[i-1],avgSubject[i-1] );
	}

	return 0;
}

