#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	int qnt;
	scanf("%d", &qnt);
	int total;
	for(int j; j < qnt; j++){
		
		string stri1, stri2;
		cin >> stri1 >> stri2;
		
		total = 0;
		int size = stri1.size();
		for(int i=0; i < size; i++){
			if(stri1[i] == stri2[i]) continue;
			else if(stri2[i] < stri1[i]) total += 26 + (stri2[i] - stri1[i]);
			else total += stri2[i] - stri1[i];
		}	
		printf("%d\n", total);
	}
	return 0;
}
