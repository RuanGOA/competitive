#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef queue <ll> qi;
int n;
qi lib;

int main(){
	scanf("%d", &n);

	ll dec, aux;
	for(int i = 0; i < n; i++){
		scanf("%lld", &dec);
		if(dec == 1){
			scanf("%lld", &aux);
			lib.push(aux);
		} else if(dec == 2){
			if(!lib.empty()) lib.pop();
		} else
			if(!lib.empty()){ 
				printf("%lld\n", lib.front());
			} else printf("Empty!\n");
	}
	return 0;
}
