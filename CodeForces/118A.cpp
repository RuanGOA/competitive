#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	int size = str.size();
	for(int i = 0; i < size; i++){
		if(toupper(str[i]) != 'Y' &&
			 toupper(str[i]) != 'A' &&
		 	 toupper(str[i]) != 'E' &&
			 toupper(str[i]) != 'I' &&
			 toupper(str[i]) != 'O' &&
			 toupper(str[i]) != 'U')
			cout << "." << char(tolower(str[i])); 
	}
	printf("\n");

	return 0;
}
