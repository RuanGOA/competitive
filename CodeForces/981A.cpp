#include <bits/stdc++.h>

using namespace std;

int testar(string str, int left, int right){
	while(left <= right){
  	if(str[left++] != str[right--])
    	return false;
    }
  return true;
}

int main(){
	string str;
	cin >> str;
	int length = str.size();
	
	//se forem diferentes
	if(!testar(str, 0, length - 1))
		cout << length;

	//primeira a penultima ou segunda a ultima
  else if(!testar(str, 0, length - 2) || !testar(str, 1, length - 1))
		cout << length - 1;

  else
		cout << "0";
	cout << "\n";
    return 0;
}
