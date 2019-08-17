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

void aux(string word) {
    if(word.length() > 10) {
        cout << word[0] << word.length() - 2 << word[word.length()-1] << endl;
    } else cout << word << endl;
}

int main() {
    cin >> n;

    string word;
    for(int i = 0; i < n; i++) {
        cin >> word;
        aux(word);
    }

    return 0;
}