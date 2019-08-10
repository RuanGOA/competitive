#include <bits/stdc++.h>

using namespace std;

int n, m, z;

int main() {
    scanf("%d %d %d", &n, &m, &z);

    int ans = 0;
    for(int i = 1; i <= z; i++) {
        if(i % n == 0 && i % m == 0)
            ans++;
    }

    cout << ans << endl;

    return 0;
}