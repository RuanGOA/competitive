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
    
int num;

bool verify(int num) {
    stringstream s;
    s << num;
    string stri = s.str();
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(stri[i] == stri[j]) return false;
        }
    }

    return true;
}

int main() {
    cin >> num;

    if(num >= 1987 && num < 2013) {
        cout << "2013" << endl;
    } else {
        int i = num + 1;
        while(!verify(i)) {
            i++;
        }

        cout << i << endl;
    }
     
    return 0;
}