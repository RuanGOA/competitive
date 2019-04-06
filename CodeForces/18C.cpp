#include <bits/stdc++.h>
#define MAXS 100007

using namespace std;

int lis[MAXS];

int main() {
	int n;
	scanf("%d", &n);
	
	int soma = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &lis[i]);
		soma += lis[i];
	}
	
	int cache = 0, cont = 0;
	for(int i = 0; i < n - 1; i++){
		cache += lis[i];
		if(cache == (soma - cache))
			cont++;
	}

	printf("%d\n", cont);

	return 0;
}
