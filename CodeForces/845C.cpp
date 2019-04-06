#include <bits/stdc++.h>
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef pair <int, int> pii;
int n;

int main(){
	vector <pii> lib;
	scanf("%d", &n);

	int a, b;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		lib.push_back(mp(a, b));
	}

	sort(lib.begin(), lib.end());

	a = -1; b = -1;
	for(int i = 0; i < n; i++){
		if(a < lib[i].first){
			a = lib[i].second;
			continue;
		}
		else if(b < lib[i].first){
			b = lib[i].second;
			continue;
		}
		else{
			printf("NO");
			return 0;
		}
	}

	printf("YES\n");
	return 0;
}