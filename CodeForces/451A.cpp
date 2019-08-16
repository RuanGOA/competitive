#include <bits/stdc++.h>

using namespace std;

int r, c;

int main() {
    scanf("%d %d", &r, &c);

    if(r == 1 || c == 1) cout << "Akshat" << endl;
    else cout << ((min(r, c)%2) ? "Akshat" : "Malvika") << endl;

    return 0;
}
