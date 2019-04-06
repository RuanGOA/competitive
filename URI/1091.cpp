#include <bits/stdc++.h>

using namespace std;

int main(){
	int qnt, lo, c_lo, ns, c_ns;//c->cache
	while(scanf("%d", &qnt) != EOF){
		scanf("%d %d", &lo, &ns);
		
		for(int i = 0; i < qnt; i++){
			scanf("%d %d", &c_lo, &c_ns);
			
			if(c_lo == lo || c_ns == ns) printf("divisa\n");
			else if(c_lo < lo){
				if(c_ns < ns) printf("SO\n");
				else printf("NO\n");
			}
			else{	
				if(c_ns < ns) printf("SE\n");
				else printf("NE\n");
			}
		}


	}
	return 0;
}
