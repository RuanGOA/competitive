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

    void wordLC() {
        for(int i = 0; i < word.length(); i++) 
            word[i] = tolower(word[i]);
    }

    void wordUC() {
        for(int i = 0; i < word.length(); i++) 
            word[i] = toupper(word[i]);
    }

    int main() {
        cin >> word;
        int ql = 0;
        for(int i = 0; i < word.length(); i++)
            if(word[i] >= 97) ql++;
        
        if (ql >= word.length()/2.0) wordLC();
        else wordUC();

        cout << word << endl;
    }