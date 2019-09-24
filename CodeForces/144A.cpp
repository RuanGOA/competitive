#include <bits/stdc++.h>
#define MAXS 107

using namespace std;

int lib[MAXS];
int n;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        scanf("%d", &lib[i]);
    }

    int min = n-1, max = 0;
    for(int i = 0; i < n; i++) {
        if(lib[i] > lib[max]) max = i;
        if(lib[i] <= lib[min]) min = i;
    }

    if(min < max) max -= 1;

    cout << max + (n - 1 - min) << endl;

    return 0;
}