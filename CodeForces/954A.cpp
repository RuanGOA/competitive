#include <bits/stdc++.h>

using namespace std;

int main(){
	int s;
	cin >> s;

	string word;
	cin >> word;

	int i = 0; 
	string cache = "";
	while( i < s){
		if(word[i] == 'R' && word[i+1] == 'U'|| 
		   word[i] == 'U' && word[i+1] == 'R'){
			i++;
			cache += 'D';
			if(i == s-1) break;
		}
		else
			cache += word[i];
		i++;
	}

	int size = cache.size();
	printf("\n%d\n", size);

	return 0;
}