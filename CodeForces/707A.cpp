#include <bits/stdc++.h>

using namespace std;

int c, r;
char var;

bool in(char v) {
    return v == 'C' || v == 'M' || v == 'Y';
}

int main() {
    cin >> r >> c;

    bool flag = false; 
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> var;
            if(in(var)){
                flag = true;
            }
        }
    } 

    cout << ((flag) ? "#Color" : "#Black&White") << endl;

    return 0;
}