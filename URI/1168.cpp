#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
	int qnt;
	scanf("%d", &qnt);

	for(int i=0; i < qnt; i++){
		char cache[110];
		scanf("%s", cache);
		int total = 0;
		for(int j=0; j < strlen(cache); j++){
			if     (cache[j] == '1') total += 2;
			else if(cache[j] == '7') total += 3;
			else if(cache[j] == '4') total += 4;
			else if(cache[j] == '2' ||
					cache[j] == '5' ||
					cache[j] == '3') total += 5;
			else if(cache[j] == '6' ||
					cache[j] == '9' ||
					cache[j] == '0') total += 6;
			else                     total += 7;
		}
		printf("%d leds\n", total);
	}
	return 0;
}
