#include <bits/stdc++.h>

using namespace std;

int n, p, q;

int main() {
    cin >> n;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &p, &q);
        if(q - p >= 2) ans++;
    }

    cout << ans << endl;

    return 0;
}