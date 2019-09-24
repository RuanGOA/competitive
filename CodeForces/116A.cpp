#include <bits/stdc++.h>

#define MAXS 100000007
#define MAX 2147483647
#define MOD 1000000007
#define mset(x,y) memset(&x, (y), sizeof(x))
#define mp(a, b) make_pair(a, b)
#define IN freopen("input.cpp", sdtin, "r");
#define OU freopen("output.cpp", stdout, "w");

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef priority_queue<int, vector<int>, greater<int>> pqc;

//int arr[MAXS];

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;
   int n, var, cache = 0, max = -MAX;
   cin >> n;
   for(int i = 0; i < n * 2; i++) {
      cin >> var;
      if(i % 2 == 0) {
         cache -= var;
      } else {
         cache += var;
         if(cache > max) max = cache;
      }
   }

   cout << max << endl;

   return 0;
}
