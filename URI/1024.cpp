#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	int qnt;
	scanf("%d", &qnt);
	
	for(int i=0; i < qnt; i++){
		
		string str;
		getline(cin, str);
		int size = str.size();
		//primeira passada pedida, deslocamento de 3 ASCII
		for(int j=0; j < size; j++){
			if(isalpha(str[j])) str[j] = str[j] + 3;
		}
		cout << str << "\n";
		//segunda passada, linha deve ser invertida
		char cache;
		for(int j=0; j<size/2; j++){
			cache = str[j];
			str[j] = str[size-1-j];
			str[size-1-j] = cache;	
		}
		cout << str << "\n";
		//terceira passada, a metade direita -3 caracteres ASCII
		for(int j=(size/2); j < size; j++){
			str[j] -= 1;
		}
		cout << str << "\n";
	}
	return 0;
}
