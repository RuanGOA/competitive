#include <bits/stdc++.h>

using namespace std;

int abs(int num){
	if(num < 0) return (num*-1);
	else return num;
}

int main(){
	int qnt;
	cin >> qnt;
		
	int vt[qnt];		
	
	for(int i = 0; i < qnt; i++) 
			cin >> vt[i];
	
	for(int i = 0; i < qnt; i++){
		if(i == 0)
			cout << abs(vt[0]-vt[1]) << " " << abs(vt[qnt-1]-vt[0]) << "\n";
 
		else if(i == qnt-1)
			cout << abs(vt[qnt-1]-vt[qnt-2]) << " " << abs(vt[qnt-1]-vt[0]) << "\n";
		
		else{
			if(abs(vt[i-1] - vt[i]) < abs(vt[i+1]-vt[i]))
				cout << abs(vt[i-1]-vt[i]) << " ";
			else
				cout << abs(vt[i+1]-vt[i]) << " ";
	
			if(abs(vt[qnt-1]-vt[i]) > abs(vt[0]-vt[i]))
				cout << abs(vt[qnt-1]-vt[i]) << "\n";
			else
				cout << abs(vt[0]-vt[i]) << "\n";
			}
		}
	return 0;
}
