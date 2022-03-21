#include <stdio.h>
int main () {
	int binary[4] = {1,1,0,1};
	int ans=0;
	
	for (int index = 3; index >=0; index--) { // index = 3 2 1 0
		int two=1;
		
		for (int index2 = 0; index2<index; index2++) {
			two *=2;
		}
		ans += binary[3-index] * two;
	}
	
	printf("%d\n",ans);
	
	return 0;
}

