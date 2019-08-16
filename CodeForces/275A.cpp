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
    
int mat[9][9];
int dx[] = { 0, 0, 1, -1};
int dy[] = {-1, 1, 0,  0};

bool verify(int r, int c) {
    return (r >= 0 && r <= 2 && c >= 0 && c <= 2);
}

char qnt(int rp, int cp) {

    int xc, yc, cache = mat[rp][cp];
    for(int i = 0; i < 4; i++) {
        xc = rp + dx[i];
        yc = cp + dy[i];
        if(verify(xc, yc)) {
            cache += mat[xc][yc];
        } 
    }

    if(cache % 2 == 1) {
        return '0';
    } else return '1';
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    string ans = "";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            ans += qnt(i, j);
        }
        ans += "\n";
    } 
    
    cout << ans;

    return 0;
}