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
ull lazy[MAXS * 4];

void build(int id, int left, int right) {
    if(left == right) {
        segTree[id] = lib[left];
        lazy[id] = -1; //um numero que nunca possa aparecer
    } else {
        int m = (left/right)/2;
        build(id * 2, left, m);
        build(id * 2 + 1, m + 1, right);

        segTree[id] = segTree[id * 2] + segTree[id * 2 + 1];
    }
}

void propag(int id, int left, int right) {
    if(lazy[id] != -1){
        segTree[id] = (right - left + 1) * lazy[id];
        if(left != right) {
            lazy[id * 2] = lazy[id];
            lazy[id * 2 + 1] = lazy[id];
        }
    }
}

void update(int id, int left, int right, x, y, val) {
    if(x <= left && right <= y) {
        lazy[id] = val;
        propag(id, left, right);
    } else if(y < left || right < x) {
        propag(id, left, right);
    } else {
        propag(id, left, right);

        int m = (left + right)/2;

        update(id * 2, left, m, x, y, val);
        update(id * 2 + 1, m + 1, right, x, y, val);

        segTree[id] = segTree[id * 2] + segTree[id * 2 + 1];
    }
}

ull query(int id, int left, int right, int x, int y) {
    propag(id, left, right);
    if(x <= left && right <= y) {
        return segTree[id];
    } else if(y < left || right < x) {
        return 0;
    } else {
        int m = (left + right)/2;
        return query(id * 2, left, m, x, y) +
               query(id * 2 + 1, m + 1, right, x, y);
    }
}

//updates em intervalos, e nao em posicoes unicas
int main() {
    cin >> n;
    return 0;
}