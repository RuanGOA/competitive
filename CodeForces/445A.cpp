#include <bits/stdc++.h>
#define INF 1000000007
#define MAXS 107
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

int n, m;
string stri[MAXS];

int main() {
    scanf("%d %d", &n, &m);

    char var;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> var;

            if(var == '.') {
                if((j + i) % 2 == 0) stri[i] += "B";
                else stri[i] += "W";
            } else stri[i] += "-";
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << stri[i] << endl;
    }

    return 0;
}