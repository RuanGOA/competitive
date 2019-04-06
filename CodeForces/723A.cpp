#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[3], min=101, max=-1;
	for(int i = 0; i < 3; i++){
		scanf("%d", &v[i]);
		if(v[i] > max) max = v[i];
		if(v[i] < min) min = v[i];
	}

	printf("%d", abs(max-min));

	return 0;
}
