#include <bits/stdc++.h>

using namespace std;

string lib;
bool aux[26];

int main() {
    getline(cin, lib);

    int ans = 0;
    for(int i = 0; i < lib.length(); i++) {
        if(lib[i] >= 97 && lib[i] <= 122) {
            if(!aux[lib[i]-97]){
                ans++;
                aux[lib[i]-97] = true;
            }
        }
    }

    cout << ans << endl;

    return 0;
}