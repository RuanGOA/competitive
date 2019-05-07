#include <bits/stdc++.h>
#define MAXED 10007
#define MAXEG 107
#define IN freopen("input.txt", "r", stdin);
#define OU freopen("output.txt", "w", stdout);

using namespace std;

struct edge {
    int c1;
    int c2;
    int size;
};

edge high[MAXED];
int fat[MAXEG], rat[MAXEG];
int n, m;

bool comp(edge r1, edge r2) {
    return r1.size < r2.size;
}

int main() {
    IN OU
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) {
        fat[i] = i;
        rat[i] = 1;
    }

    for(int i = 0; i < m; i++) {
        scanf("%d %d %d", &high[i].c1,
                          &high[i].c2,
                          &high[i].size);
    }

    sort(high, high + m, comp);

    


    return 0;
}
