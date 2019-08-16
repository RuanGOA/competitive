#include <bits/stdc++.h>
#define MAXS 100003

using namespace std;
typedef unsigned long long ull;

ull tot;
int n;

int main() {
    tot = 0;

    scanf("%d", &n);

    int min = 1000000007, num;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 1 && num < min) {
            min = num;
        }

        tot += num;
    }

    (tot % 2 == 0) ? cout << tot << endl : 
                     cout << tot - min << endl;

    return 0;
}