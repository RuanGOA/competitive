#include <bits/stdc++.h>

using namespace std;

typedef map <string, int> mpsi;
int n;
mpsi lib;

int main() {
	scanf("%d", &n);

	string var;
	for(int i = 0; i < n; i++){
		cin >> var;
		if(lib[var] == 0){
			cout << "OK\n";
			lib[var]++;
		} else{
			cout << var << lib[var] << "\n";
			lib[var]++;
		}
	}
	return 0;
}
