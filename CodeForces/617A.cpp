#include <bits/stdc++.h>
#include <tuple>

using namespace std;

int main(){
	int dest;
	cin >> dest;
	
	int feet[5] = {5, 4, 3, 2, 1};

	int cont = 0;
	while(dest > 0){
		for(int i = 0; i < 5; i++){
			if(feet[i] <= dest){
				dest -= feet[i];
				cont++;
				break;
			}
		}
	}
	cout << cont << "\n";
}
