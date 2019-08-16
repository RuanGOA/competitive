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
    string str, cache, ans;
    void verify() {
        if(cache == ".") {
            cache = "";
            ans += '0';
        } else if(cache == "-.") {
            cache = "";
            ans += '1';
        } else if(cache == "--") {
            cache = "";
            ans += '2';
        }
    }
     
    int main() {
        cache = "";
     
        cin >> str;
     
        for(int i = 0; i < str.length(); i++) {
            cache += str[i];
            verify();
        }
     
        cout << ans << endl;
     
        return 0;
    }