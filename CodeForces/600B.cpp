#include <bits/stdc++.h> 
#define MAXS 200007 
using namespace std; 

//typedef long long ll; 
//typedef vector < int > vi; 
//typedef pair < int, int > ii; 

int main(){ 
	int n, m; 
	scanf("%d %d", &n, &m); 

	int arraya[MAXS], arrayb[MAXS]; 

	for(int i = 0; i < n;i++) 
		scanf("%d", &arraya[i]); 

	long int var;
	for(int i =0 ; i < m; i++){ 
		scanf("%d", &arrayb[i]); 
		var = upper_bound(arraya, arraya + n, arrayb[i]) - arraya;
		printf("%ld", var);
	}

	return 0;
}

#include <bits/stdc++.h> 
#define MAXS 200007 
using namespace std; 

int main(){ 
	int n, m; 
	int lib1[MAXS], lib2[MAXS];
    scanf("%d %d", &n, &m); 
    for(int i = 0; i < n;i++) scanf("%d", &lib1[i]); 
	for(int i =0 ; i < m; i++) scanf("%d", &lib2[i]); 
    sort(lib1, lib1 + n); 
    for(int i = 0; i < m; i++){ 
        printf("%ld ", upper_bound(lib1, lib1 + n, lib2[i]) - lib1); 
    } 
        
return 0;
}