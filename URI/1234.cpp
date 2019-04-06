#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	string word;
	int ctrl, size;
	while(getline(cin, word)){
		
		size = word.size();
		ctrl = 1;
		for(int i=0; i < size; i++){
			if(!isspace(word[i]) && ctrl == 1){
				ctrl = 0;
				printf("%c", toupper(word[i]));
			}
			
			else{
				if(!isspace(word[i])){ 
					ctrl = 1;
					printf("%c", tolower(word[i]));
				}

				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
