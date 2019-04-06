#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long base, lim; 
	unsigned long long n;
	scanf("%lld %lld %ld", &base, &lim, &n);

	bool flag = false;
	if(base == 1){
		cout << "1";
		flag = true;
	}

	if(lim < n or base > n) cout << "-1";
	else if(n != 1){
		unsigned long long cache = n;
		while(cache <= lim && cache > 0){
			if(flag) cout << " ";
			cout << cache;
			if(!flag) cout << " ";
			cache = cache * n;
		}	
	}
	cout << "\n";

	return 0;
}

