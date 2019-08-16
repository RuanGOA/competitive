#include <bits/stdc++.h>
#define MOD 100

using namespace std;

typedef unsigned long long ull;

ull n;

/*
int mulMod(int a, int b) {
    return ((a % MOD) * (b % MOD)) % MOD;
}

int fastExp(ull n) {
    if(n == 0) return 1;
    if(n == 1) return 5;
    if(n % 2 == 1) return mulMod(5, fastExp(n-1));

    int aux = fastExp(n/2);
    return mulMod(aux, aux);   
}
*/

int main() {
    cin >> n;
    (n == 1) ? printf("5\n") : printf("25\n");

    return 0;
}