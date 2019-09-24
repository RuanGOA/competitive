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
typedef map<int, bool> mib;

//int arr[MAXS];
mib dic;

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;

   int var;
   int c = 0;
   for(int i = 0; i < 4; i++) {
      cin >> var;
      if(dic[var]) c++;
      else dic[var] = true;
   }

   cout << c << endl;
   
   return 0;
}
