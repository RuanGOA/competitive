#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);

	int lis[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &lis[i]);

	sort(lis, lis + n);

	int cont = 1, rpoint = n-1, lpoint = n-2, cache = -1;
	while(lpoint > -1){
		if(abs(lis[rpoint] - lis[lpoint]) <= 5){
			cont = rpoint - lpoint + 1;
			lpoint--;
		}
		else {
			rpoint--;
			if(cont > cache) cache = cont;
			cont = 1;
		}
	}
	if(cont > cache) cache = cont;

	printf("%d\n", cache);
	
	return 0;
}