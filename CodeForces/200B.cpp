#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	double media, cache;
	for(int i = 0; i < n; i++){
		scanf("%lf", &cache);
		media += cache;
	}
	
	printf("%.12lf", media/n); 
	return 0;
}
