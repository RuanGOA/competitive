#include <bits/stdc++.h>
#define INF 1000000007
#define MAXS 1007
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

int main() {
    cin >> n;

    int ans = 0, cont, var;
    for(int i = 0; i < n; i++) {
        cont = 0;
        for(int j = 0; j < 3; j++) {
            scanf("%d", &var);
            if(var == 1) {
                cont++;
            }
        }
        if(cont >= 2) ans++;
    }

    cout << ans << endl;

    return 0;
}