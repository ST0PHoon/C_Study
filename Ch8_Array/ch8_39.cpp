#include <stdio.h>

int main () {
	//n_n����� ��� 2�� ���ϴ� ũ��� �ٲ��ָ� �ȴ�. 
	int A[2][2] = {
		{3,4},
		{5,6}
		};
	int B[2][2] = {
		{1,5},
		{3,2}
	};
	
	int AB[2][2] = {0,};
	
// i�� �ִ밪�� �ٲ��ָ� �ȴ�. 
	for(int i=0;i<2;i++){
	     for(int j=0;j<2;j++){
	     	for ( int k = 0; k<2; k++){
		        AB[i][j] += A[i][k]*B[k][j]
				printf("%d\n", AB[i][j]); 
			}   
	     }
	} 

	return 0;
}
