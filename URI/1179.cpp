#include <bits/stdc++.h>

using namespace std;

int main(){
	int vetor_par[5], vetor_impar[5];
	int cont_par = -1, cont_impar = -1;
	int receive;
	for(int i=0; i<15; i++){
		scanf("%d", &receive);
		if(receive%2==0){
			cont_par++;
			vetor_par[cont_par] = receive;
			if(cont_par==4){
				cont_par = -1;
				for(int x=0; x<5; x++) printf("par[%d] = %d\n", x, vetor_par[x]);
				int vetor_par[5];
			}
		}
		
		else{
			cont_impar++;
			vetor_impar[cont_impar] = receive;
			if(cont_impar==4){
				cont_impar = -1;
				for(int x=0; x<5; x++) printf("impar[%d] = %d\n", x, vetor_impar[x]);
				int vetor_impar[5];
			}
		}
	}
	
	for(int i=0; i<=cont_impar; i++) printf("impar[%d] = %d\n", i, vetor_impar[i]);
	
	for(int i=0; i<=cont_par; i++) printf("par[%d] = %d\n", i, vetor_par[i]);
}
