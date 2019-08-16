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

int x, y;

int main() {
    
    int num;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            scanf("%d", &num);
            if(num == 1) {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(3 - x) + abs(3 - y) << endl;

    return 0;
}