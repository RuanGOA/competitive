#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int lis[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &lis[i]);
		
	int dec, dec1, dec2, cache = 0;
	for(int i = 0; i < m; i++){
		scanf("%d",&dec);
		if(dec == 1){
			scanf("%d %d", &dec1, &dec2);			
			lis[dec1-1] = dec2 - cache;			

		} else if(dec == 2){
				scanf("%d", &dec1);
				cache += dec1;
			
			} else{
					scanf("%d", &dec1);
					printf("%d\n", lis[dec1-1] + cache);

				}
	}
	return 0;
}
