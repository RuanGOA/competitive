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

string word;

bool verify() {

    int c = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == '4' || word[i] == '7') c++;
    }

    return (c == 7 || c == 4);
}
  
int main() {
    cin >> word;
    cout << ((verify()) ? "YES" : "NO") << endl;

    return 0;
}