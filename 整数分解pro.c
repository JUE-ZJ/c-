#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	int m = 1;
	int t = num;
	while (t > 9) {
		t/= 10;  
		m *= 10;
	}
	int one;
	while(m>0){
		one=num/m;
		printf("%d ",one);
		num%=m;
		m/=10;
	}
	
	

	return 0;
}
