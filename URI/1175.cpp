#include <bits/stdc++.h>

int main(){
	int vector[21];
	int trade;

	for(int i=0; i<20; i++) scanf("%d", &vector[i]);
	for(int i=0; i<10; i++){
		trade = vector[i];
		vector[i] = vector[19-i];
		vector[19-i] = trade;
	}
	for(int i=0; i<20; i++) printf("N[%d] = %d\n", i, vector[i]);
}
