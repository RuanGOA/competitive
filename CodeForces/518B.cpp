#include <bits/stdc++.h>                                                                             
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  
  map <char, int> beta;
	map <char, int> alfa;
  /*for(int i = 'A'; i < 'z'; i++){
    beta[i] = 0;    
  }*/
	//contando as letras de cada string
  for(int i = 0; i < a.size(); i++)
    beta[a[i]] += 1;
	for(int i = 0; i < b.size(); i++)
		alfa[b[i]] += 1;
  ///////
	///////
  int yay = 0, temp;	
	for(int i = 'A'; i <= 'Z'; i++){
		temp = min(beta[i], alfa[i]);
		yay += temp;
		beta[i] -= temp;
		alfa[i] -= temp;
	}
	for(int i = 'a'; i <= 'z'; i++){
		temp = min(beta[i], alfa[i]);
		yay += temp;
		beta[i] -= temp;
		alfa[i] -= temp;	
	}	
	///////
	///////
	//Contar who maiusculas
	int who = 0;
	for(int i = 'A'; i <= 'Z'; i++){
		temp = min(beta[i], alfa[i+32]);
		who += temp;
		beta[i] -= temp;
		alfa[i+32] -= temp;
	}
	//contar who minusculas
	for(int i = 'a'; i <= 'z'; i++){
		temp = min(beta[i], alfa[i-32]);
		who += temp;
		beta[i] -= temp;
		alfa[i-32] -= temp;	
	}	
	
	printf("%d %d\n", yay, who);

  return 0;
}
