#include <bits/stdc++.h>

using namespace std;

int n, t;

int main() {
    scanf("%d %d", &n, &t);

    if(t == 10 && n == 1) cout << "-1" << endl;
    else {
        stringstream ss;
        ss << t;
        string ans = ss.str();
        for(int i = 0; i < n - 2; i++) {
            ans += '0';
        }

        if(t != 10 && n != 1) ans += '0';

        cout << ans << endl;
    }

    return 0;
}