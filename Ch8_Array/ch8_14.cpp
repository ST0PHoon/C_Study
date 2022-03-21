#include <stdio.h>

int main () {
	int numArr[10]={11, 22, 33 ,44 ,55 ,66 ,77 ,88,99 ,110};
	int ans=0;
	
	for (int i =0; i < 10; i++) {
		ans += numArr[i];
	}
	
	printf("%d",ans);
	
	return 0;
}
