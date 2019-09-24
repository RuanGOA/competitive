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

int arr[4];
int sum = 0;

bool solve() {
   int sumi;
   for(int i = 0; i < 4; i++) {
      sumi = 0;
      sumi += arr[i];
      for(int j = i+1; j < 4; j++){
         sumi += arr[j];
         if(sumi == sum/2) return true;
      }
   }
   return false;
}

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;
   int imp = 0; int impSum = 0;
   for(int i = 0; i < 4; i++) {
      cin >> arr[i];
      sum += arr[i];
      if(arr[i] % 2 == 1) {
         impSum += arr[i];
         imp++;
      }
   }

   sort(arr, arr + 4);

   if(sum % 2 == 1) cout << "NO" << endl;
   else {
      if(imp % 2 == 0) {
         cout << ((solve())?"YES":"NO")<<endl;
      } else cout << "NO" << endl;
   }

   return 0;
}
