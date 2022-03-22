#include <stdio.h>

int main () {
	//n_n행렬의 경우 2를 원하는 크기로 바꿔주면 된다. 
	int A[2][2] = {
		{3,4},
		{5,6}
		};
	int B[2][2] = {
		{1,5},
		{3,2}
	};
	
	int AB[2][2] = {0,};
	
// i의 최대값도 바꿔주면 된다. 
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
