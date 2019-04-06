#include <bits/stdc++.h>

using namespace std;

bool inzao(int list[], int num, int size){
	for(int i = 0; i < size; i++)
		if(list[i] == num)	return true;

	return false;
}


int main(){
	bool result;
	int n, m;
	scanf("%d %d", &n, &m);

	//receber primeira lista
	int l1[n], cache_l1= 10; bool l1b[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &l1[i]);
		if(l1[i] < cache_l1) cache_l1 = l1[i];
	}
	
	//receber segunda lista, ja vendo se ha na primeira
	int l2[m], cache_l2 = 10; bool l2b[m];
	for(int i = 0; i < m; i++){
		scanf("%d", &l2[i]);
		if(l2[i] < cache_l2) cache_l2 = l2[i];
		
		l2b[i] = inzao(l1, l2[i], n);
	}

	//ver se os elementos da primeira lista estão na segunda
	for(int i = 0; i < n; i++)
		l1b[i] = inzao(l2, l1[i], m);	
	
	//testes para comparacao total
	int cache_total;
	if(cache_l2 < cache_l1) cache_total = cache_l2 * 10 + cache_l1;
	else if(cache_l1 < cache_l2) cache_total = cache_l1 * 10 + cache_l2;
	else cache_total = cache_l1;
	
	//verificar lista1
	for(int i = 0; i < n; i++)
		if(l1b[i] && l1[i] < cache_total)
			cache_total = l1[i];
	
	//verificar lista2
	for(int i = 0; i < m; i++)
		if(l2b[i] && l2[i] < cache_total)
			cache_total = l2[i];

	printf("%d\n", cache_total);

	return 0;
}
