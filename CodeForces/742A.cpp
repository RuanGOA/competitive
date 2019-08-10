#include <bits/stdc++.h>
#define MOD 10

using namespace std;

int n;

int fastExp(int n) {
    if(n == 0) return 1;
    if(n == 1) return 8;

    if(n % 2 == 1) return (8 * fastExp(n-1)) % MOD;

    int aux = fastExp(n / 2);
    return ((aux % MOD) * (aux % MOD)) % MOD;
}

int main() {
    cin >> n;
    cout << fastExp(n) << endl;

    return 0;
}