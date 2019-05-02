#include <bits/stdc++.h>
#define MAXS 2000007
#define mp(a, b) make_pair(a, b)

using namespace std;

struct road{
    int c1;
    int c2;
    int cost;
};

road roads[MAXS];
int rank[MAXS];
int pai[MAXS];
int m, n;

int 

int find(int a){
    if(pai[a] == a) return a;
    return pai[a] = find(pai[a]);
}

void uni(int a, int b) {
    int pai_a = find(a);
    int pai_b = find(b);

    if(pai_a == pai_b) return;
    if(rank[pai_a] > rank[pai_b]){
        rank[pai_a] += rank[pai_b];
        pai[pai_b] = pai_a;
    } else {
        rank[pai_b] += rank[pai_a];
        pai[pai_a] = pai_b;
    }
}

bool comp(int n1, int n2){
    return roads[n1].cost < roads[n2].cost;
}

int main() {
    while(true){
        scanf("%d %d", &m, &n);
        if(m == 0 && n == 0) break;

        for(int i = 1; i <= m; i++){
            parent[i] = i;
            rank[i] = 1;
        }

        int x, y z;
        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &estradas[i].c1, 
                              &estradas[i].c2, 
                              &estradas[i].cost);
        }

        sort(roads, roads + n, comp);







    }

    return 0;
}
