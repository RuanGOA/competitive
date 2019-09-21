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

int arr[MAXS];
int st[MAXS];

void build(int id, int left, int right) {
   if(left == right) {
      st[id] = arr[left];
   } else {
      int mid = (left + right)/2;

      build(id * 2, left, mid);
      build(id * 2 + 1, mid + 1, right);

      st[id] = st[id * 2 + 1] +  st[id * 2];
   }
}

void update(int id, int left, int right, int pos, int value) {
   if(left == right) {
      st[id] = value;
   } else {
      int mid = (left + right)/2;
      if(pos <= mid) {
         update(id * 2, left, mid, pos, value);
      } else update(id * 2 + 1, mid + 1, right, pos, value);
      st[id] = st[id * 2] + st[id * 2 + 1];
   }

}

int query(int id, int left, int right, int x, int y) {
   if(x <= left && right <= y) return st[id];
   else if(x > right || y < left) return 0;
   else {
      int mid = (left + right)/2;
      return query(id * 2, left, mid, x, y) + query(id * 2 + 1, mid + 1, right, x, y);
   }
}

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;
   int n; cin >> n;

   for(int i = 1; i <= n; i++) {
      scanf("%d", &arr[i]);
   }

   build(1, 1, n);

   int q; cin >> q;
   int x, y; char var;
   for(int i = 0; i < q; i++) {
      cin >> var;
      if(var == 'Q') {
         cin >> x >> y;
         cout << query(1, 1, n, x, y) << endl;
      } else {
         cin >> x >> y;
         update(1, 1, n, x, y);
      }
   }

   return 0;
}
