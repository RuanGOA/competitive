#include <bits/stdc++.h>

using namespace std;

int main(){
	double num;
	scanf("%lf", &num);
	
	double vector[100];
	vector[0] = num;

	for(int i=1; i<100; i++) vector[i] = vector[i-1]/2;
	
	for(int i=0; i<100; i++) printf("N[%d] = %.4lf\n", i, vector[i]);
}
