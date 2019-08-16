#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, b, d;
ll tot;

int main() {
    tot = 0;
    scanf("%d %d %d", &n, &b, &d);

    int num, ans = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num <= b) {
            tot += num;
            if(tot > d) {
                tot = 0;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}