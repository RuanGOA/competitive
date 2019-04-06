#include <bits/stdc++.h>
#define MAXS 100007

using namespace std;

typedef set<int> si;
typedef map<int, bool> mib;

int n, m, lib[MAXS], aux[MAXS];
si sev;

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
		scanf("%d", &lib[i]);

	for(int i = n; i > 0; i--){
		if(sev.find(lib[i]) == sev.end())
			sev.insert(lib[i]);
		aux[i] = sev.size();
	}

	int cache;
	for(int i = 0; i < m; i++){
		scanf("%d", &cache);
		printf("%d\n", aux[cache]);
	}

	return 0;
}
