#include <bits/stdc++.h>
#define MAXS 57

using namespace std;
int n, p;
int arr[MAXS];


int main() {
    cin >> n >> p;
    for(int i = 0; i < p; i++) 
        scanf("%d", &arr[i]);

    sort(arr, arr + p);

    int i = 0, j = n - 1, save = 2000;
    while(j < p) {
        if(arr[j] - arr[i] < save) {
            save = arr[j] - arr[i];
        } else {
            i++; j++;
        }
    }

    cout << save << endl;
    return 0;
}