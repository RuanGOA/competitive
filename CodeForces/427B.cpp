#include <bits/stdc++.h>
#define MAXS 200007
using namespace std;
int n, t, c, lib[MAXS];
int main(){
	scanf("%d %d %d", &n, &t, &c);

	int cont = 0, cache = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &lib[i]);
		if(lib[i] <= t) cache++;
		else{
			if(cache >= c) cont += cache - (c-1);
			cache = 0;
		}
	}

	if(cache >= c) cont += (cache - (c-1));

	printf("%d\n", cont);
	return 0;
}
