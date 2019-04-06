#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int n, d, rest[100];

int main(){
	scanf("%d %d", &n, &d);

	int cache;
	for(int i = 0; i < n; i++){
		scanf("%d", &cache);
		rest[cache%d]++;
	}

	int cont = rest[0]/2;
	for(int i = 1; i < d/2; i++){
		cont += min(rest[i], rest[d-i]);
	}

	if(d%2==0) cont += rest[d/2]/2;
	else{
		cont += min(rest[d/2], rest[d - d/2]); 
	}

	printf("%d\n", cont*2);

	return 0;
}
