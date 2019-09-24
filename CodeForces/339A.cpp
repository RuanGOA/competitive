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

int main() {
   ios::sync_with_stdio(false);cin.tie(0);
   //IN OU
   //cout << (unsigned long long) __builtin_inf() << endl;
   string stri;
   cin >> stri;
   for(int i = 0; i < stri.length(); i+=2) {
      if(stri[i] == '1') arr[1]++;
      else if(stri[i] == '2') arr[2]++;
      else if(stri[i] == '3') arr[3]++;
   }
   //inovar nem sempre eh bom, rs
   string striAux = "";
   for(int i = 1; i < 4; i++) {
      while(arr[i] > 0){
         if(i == 1) striAux += "1+";
         else if(i == 2) striAux += "2+";
         else striAux += "3+";
         arr[i]--;
      }
   }

   cout << striAux.substr(0,striAux.length()-1) << endl;

   return 0;
}
