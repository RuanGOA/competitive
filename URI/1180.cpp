#include <bits/stdc++.h>

using namespace std;

int main(){
	int size;
	scanf("%d", &size);
	
	int vector[size+2];
	int cache_num = 10000000, cache_pos;
	for(int i=0; i<size; i++){
		cin >> vector[i];
		if(vector[i] < cache_num){
			cache_num = vector[i];
			cache_pos = i;
		}
	}	
	printf("Menor valor: %d\n", cache_num);
	printf("Posicao: %d\n", cache_pos);
}
