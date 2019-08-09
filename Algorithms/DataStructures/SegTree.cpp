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


int n, q, lib[MAXS], in, to;
ull segTree[MAXS * 4];

ull query(int id, int left, int right, int x, int y) {
    if(x <= left && right <= y) {
        return segTree[id];
    } else if(x > right || y < left) {
        return 0;
    } else {
        int m = (left + right)/2;
        return query(id * 2, left, m, x, y) + 
        query(id * 2 + 1, m + 1, right, x, y);
    }
}

void build(int id, int left, int right) {
    if(left == right) {
        segTree[id] = lib[left];
    } else {
        int m = (left + right)/2;
        build(id * 2, left, m);
        build(id * 2 + 1, m + 1, right);

        segTree[id] = segTree[id * 2] + segTree[id * 2 + 1];
    }
}

void update(int id, int left, int right, int pos, int val) {
    if(left == right) {
        segTree[id] = val;
    } else {
        int m = (left + right)/2;
        if(pos <= m) {
            update(id * 2, left, m, pos, val);
        } else {
            update(id * 2 + 1, m + 1, right, pos, val);
        }

        segTree[id] = segTree[id * 2] + segTree[id * 2 + 1];
    }
}

int main() {
    //IN OU
    cin >> n;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &lib[i]);
    }

    build(1, 1, n);

    cin >> q;
    char var;
    for(int i = 0; i < q; i++) {
        scanf("%c %d %d", &var, &in, &to);

        if(var == 'U') {
            update(1, 1, n, in, to);
        } else {
            cout << query(1, 1, n, in, to) << endl;
        }
    }

    return 0;
}