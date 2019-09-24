#include <bits/stdc++.h>

#define MAXS 100007
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

bool arr[MAXS];

int k, l, m, n, d;

bool verify(int i) {
   return i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0;
}

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;
   cin >> k >> l >> m >> n;
   cin >> d;
   int cont = 0;
   for(int i = 1; i <= d; i++) {
      if(verify(i)) cont++;
   }

   cout << cont << endl;

   return 0;
}
