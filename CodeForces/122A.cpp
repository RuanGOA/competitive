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

int x;
bool vect[MAXS];

bool aux(int n) {
    stringstream s;
    s << n;
    string a;
    s >> a;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != '4' && a[i] != '7') return false;
    }

    return true;
}

bool auquis() {
    for(int i = 4; i < 1001; i++) {
        if(vect[i] && x % i == 0) return true;
    }

    return false;
}

int main() {
    cin >> x;

    for(int i = 4; i < 1001; i++) {
        vect[i] = aux(i);
    }

    cout << ((vect[x] || auquis()) ? "YES" : "NO") << endl;

    return 0;
}