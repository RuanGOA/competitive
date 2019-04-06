#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
int main() {
	scanf("%d", &n);

	int sum1 = 0, sum2 = 0, sum3 = 0, cache;
	for(int i = 0; i < n; i++) {
		scanf("%d", &cache);
		sum1 += cache;
	}

	for(int i = 0; i < n-1; i++) {
		scanf("%d", &cache);
		sum2 += cache;
	}

	for(int i = 0; i < n-2; i++) {
		scanf("%d", &cache);
		sum3 += cache;
	}

	printf("%d\n%d\n", (sum1 - sum2), (sum2 - sum3));

	return 0;
}
