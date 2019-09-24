#include <bits/stdc++.h>
#define MAXS 100000007

using namespace std;

int n;

int main() {
    cin >> n;

    if(n % 2 != 0) cout << "-1";
    else {
        for(int i = 1; i <= n; i++){
            printf("%d ", ((i % 2 == 0) ? i - 1 : i + 1));
        }
    }

    cout << endl;

    return 0;
}