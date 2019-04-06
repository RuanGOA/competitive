#include <bits/stdc++.h>

using namespace std;

int main() {
	long long q, dif;
	cin >> q >> dif;

	long long many[q], frie[q], max = -1, cache;
	for(int i = 0; i < q; i++){
		cin >> many[i] >> frie[i];
		if(frie[i] > max){ max = frie[i]; cache = many[i];}
	}

	long long cont = 0;
	for(int i = 0; i < q; i++){
		if(many[i] > cache)
			if(many[i] - dif < cache)
				cont += frie[i];

		else
				cont += frie[i];
	}

	cout << cont << "\n";

	return 0;
}