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

int arr[26];

bool verify() {
   for(int i = 0; i < 26; i++) {
      if(arr[i] != 0) return false;
   }
   return true;
}

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;

   string c1, c2, j;
   cin >> c1 >> c2 >> j;
   for(int i = 0; i < c1.length(); i++) arr[c1[i] - 65]++;
   for(int i = 0; i < c2.length(); i++) arr[c2[i] - 65]++;
   for(int i = 0; i < j.length(); i++) arr[j[i] - 65]--;
   
   cout << ((verify()) ? "YES" : "NO") << endl;

   return 0;
}