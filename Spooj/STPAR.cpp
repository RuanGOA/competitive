#include <bits/stdc++.h>
#define MAXS 1000

using namespace std;

typedef stack <int> si;
int n, lis[MAXS];

int main(){
	while (scanf("%d", &n) && n != 0){
	    for (int i = 0; i < n; i++) scanf("%d", &lis[i]);
	    si duracell;
	    int i = 0, k = 0;
		while(i < n){
			while (!duracell.empty() && duracell.top() == k + 1){ 
	        	k++; 
	        	duracell.pop(); 
	      	}
			if (lis[i] != k + 1) duracell.push(lis[i]);
	    	else k++;
	    	i++;
		}
		while (!duracell.empty() && duracell.top() == k + 1){ 
	      k++; 
	      duracell.pop();
	    }
		printf(k == n ? "yes\n" : "no\n");
	}	
	return 0;
}
