#include <bits/stdc++.h>

using namespace std;

int main(){
	int qnt;
	cin >> qnt;

	int vetor[qnt];
	for(int i = 0; i < qnt; i++) 
		cin >> vetor[i];

	int cache;
	for(int i = 0; i < qnt; i++){
		for(int j = i+1; j < qnt; j++)
			if(vetor[i] > vetor[j]){
				cache = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = cache;
			}
	}
	
	cout << vetor[0];
	for(int i = 1; i < qnt; i++)
		cout << " " << vetor[i];

	cout << "\n";

	return 0;
}
