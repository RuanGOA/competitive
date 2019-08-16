#include <bits/stdc++.h>

using namespace std;

char var = 'a';
string lib;

int aux(char cache){
    if(max(var, cache) - min(var, cache) <= 13)
        return max(var, cache) - min(var, cache);
    else {
        return 26 - (max(var, cache) - min(var, cache));
    }
}

int main() {
    cin >> lib;

    int ans = 0;
    for(int i = 0; i < lib.length(); i++){
        ans += aux(lib[i]);
        var = lib[i];
    }

    cout << ans << endl;

    return 0;
}