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
    
int n;
int aux[MAXS], auxCont[MAXS];

string stri[MAXS];
    
int main() {
    cin >> n;
    
    memset(aux, -1, sizeof(aux));

    int cache; int max = -1; int cont = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &cache);

        if(cache > max) max = cache;

        if(aux[cache] == -1){ 
            aux[cache]++;
            auxCont[cache] = i;
            cont++;
        } else if(aux[cache] == 0){
            aux[cache] = i - auxCont[cache];
            auxCont[cache] = i;
        } else if(aux[cache] == -2) { 
            continue;
        } else {
            if(i - auxCont[cache] != aux[cache]) {
                aux[cache] = -2;
                cont--;
            } else {
                auxCont[cache] = i;
            }
        }
    }

    cout << cont << endl;

    if(cont != 0) {
        for(int i = 1; i < max + 1; i++) {
            if(aux[i] >= 0) {
                printf("%d %d\n", i, aux[i]);
            }
        }
    }

    return 0;
}