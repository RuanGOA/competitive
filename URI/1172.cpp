#include <bits/stdc++.h>

int main(){
	int vetor[12];
	for(int i = 0; i < 10; i++){ 
		scanf("%d", &vetor[i]);
		if(vetor[i] <= 0) vetor[i] = 1;
	}
	
	for(int i = 0; i < 10; i++) printf("X[%d] = %d\n", i, vetor[i]);
}

