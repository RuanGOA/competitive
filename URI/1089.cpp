#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int qnt;
	while(true){
		scanf("%d", &qnt);
		if(qnt == 0) break;
		
		int vect[qnt+4];
		for(int i=0; i < qnt; i++) cin >> vect[i];

		int cont = 0, c = -1;
		while(true){
			c++;

			if(c == 0){
				if(vect[c] < vect[c+1] &&  vect[c] < vect[qnt-1]) cont++;
				else if(vect[c] > vect[c+1] && vect[c] > vect[qnt-1]) cont++;
			}
			else if(c == qnt-1){
				if(vect[c] < vect[c-1] && vect[c] < vect[0]) cont++;
				else if(vect[c] > vect[c-1] && vect[c] > vect[0]) cont++;
				break;
			}
			else{
				if(vect[c] < vect[c-1] && vect[c] < vect[c+1]) cont++;
				else if(vect[c] > vect[c-1] && vect[c] > vect[c+1]) cont++;
			}
		}
		printf("%d\n", cont);
	}
	return 0;
}
