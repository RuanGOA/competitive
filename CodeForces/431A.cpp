#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll ans;
string lib;
int aux[5];

int main() {
    ans = 0;
    for(int i = 1; i < 5; i++) {
        cin >> aux[i];
    }

    cin >> lib;
    for(int i = 0; i < lib.length(); i++) {
        ans += aux[lib[i]-48];
    }

    cout << ans << endl;

    return 0;
}