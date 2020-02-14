#include <stdio.h>

int main() {
	
	const unsigned short N = 7, M = 10;

	unsigned short int i, j;
	int numbers[] = {6,2,6,10,3,6,3}, aux[M+1];

	
	for(i = 0;i <= M;i++) {
		aux[i] = 0;
	}

	
	for(i = 0; i < N;i++) {
		aux[numbers[i]]++;
	}

	// emptying the auxiliary array
	for(i = 0, j = 0;i <= M; i++) {
		for(; aux[i]>0; (aux[i])--) {
			numbers[j] = i;
			j++;
		}
	}

	
	for(i = 0; i < N;i++) {
		printf("%d ", numbers[i]);
	}

	printf("\n");

	return 0;
}