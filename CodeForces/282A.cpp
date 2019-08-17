#include <bits/stdc++.h>
#define INF 1000000007
#define MAXS 100007
#define IN freopen("input.txt", "r", stdin);
#define OU freopen("output.txt", "w", stdout);
#define mp(a, b) make_pair(a, b)
     
using namespace std;
     
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef queue<pii> qpi;

int n;

int aux(string var) {
    if(var == "++X" || var == "X++") {
        return 1;
    } else return -1;
}

int main() {
    string cache;

    cin >> n; int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> cache;
        ans += aux(cache);
    }

    cout << ans << endl;

    return 0;
}