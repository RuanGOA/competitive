#include <bits/stdc++.h>

using namespace std;

typedef stack <char> sc;

string p;
sc lib;

int main(){
	cin >> p;
	int size = p.size(), cont = 0;

	lib.push('.');
	for(int i = 0; i < size; i++){
		if(lib.top() == p[i]){
			lib.pop();
			cont++;
		} else{
			lib.push(p[i]);
		}
	}

	if(cont%2 == 0) printf("No\n");
	else printf("Yes\n");

	return 0;
}
