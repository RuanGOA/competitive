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

string p1, p2;

int aux() {
    int t = p1.length();

    for(int i = 0; i < t; i++) {
        if(tolower(p1[i]) > tolower(p2[i])) return 1;
        if(tolower(p1[i]) < tolower(p2[i])) return -1;
    }

    return 0;
}

int main() {
    cin >> p1;
    cin >> p2;

    cout << aux() << endl;

    return 0;
}