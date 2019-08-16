#include <bits/stdc++.h>
#define MAXS 57

using namespace std;

string lib;
int n, t;

void modify() {
    bool flag = false;
    for(int i = n - 1; i > 0; i--) {
        if(lib[i] == 'G' && lib[i-1] == 'B' && !flag){
            lib[i-1] = 'G';
            lib[i] = 'B';
            flag = true;
        } else flag = false;  
    }
}

int main() {
    scanf("%d %d", &n, &t);

    cin >> lib;

    for(int i = 0; i < t; i++) {
        modify();
    }

    cout << lib << endl;

    return 0;
}