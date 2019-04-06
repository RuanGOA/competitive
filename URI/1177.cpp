#include <bits/stdc++.h>

using namespace std;

int main(){
	int num;
	scanf("%d", &num);
	
	int cont = 0;
	for(int i=0; i < 1000; i++){
		printf("N[%d] = %d\n", i, cont);
		cont++;
		
		if(cont == num) cont = 0;
	}
}
