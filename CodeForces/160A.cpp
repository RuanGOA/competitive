#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int lis[n], sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &lis[i]);
		sum += lis[i];
	}

	sort(lis, lis + n);

	int sum1 = 0, cont = 0;
	for(int i = n - 1; i > -1; i--){
		if(sum1 > sum/2) break;
		
		cont++;	
		sum1 += lis[i];
	}

	cout << cont;

	return 0;
}