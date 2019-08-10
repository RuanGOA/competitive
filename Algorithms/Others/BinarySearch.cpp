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

int n, q, lib[MAXS];

int bs(int x) {
    int sta = 0, end = n - 1, mid;

    while(sta <= end) {
        mid = (sta + end)/2;

        if(lib[mid] == x) return mid;
        if(lib[mid] < x) sta = mid + 1;
        if(lib[mid] > x) end = mid - 1;
    }

    return -INF;
}

int main() {
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n; i++) {
        scanf("%d", &lib[i]);
    }

    sort(lib, lib + n);

    int var;
    for(int i = 0; i < q; i++) {
        scanf("%d", &var);
        cout << bs(var) << endl;
    }

    return 0;
}