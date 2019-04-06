#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int score[620], cache;
	memset(score, 0, sizeof(score));
	for(int i = 0; i < n; i++){
		scanf("%d", &cache);
		score[cache] += 1;
	}
	
	int cont = 0;
	for(int i = 1; i < 605; i++){
		if(score[i]) cont++;
	}
	printf("%d\n", cont);
}
