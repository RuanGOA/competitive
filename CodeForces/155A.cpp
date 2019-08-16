#include <bits/stdc++.h>
#define MAXS 1007

using namespace std;

int n;
int lib[MAXS];

int main() {
   scanf("%d", &n);
   for(int i = 0; i < n; i++){
      scanf("%d", &lib[i]);
   }

   int max = lib[0], min = lib[0];
   
   int ans = 0;
   for(int i = 0; i < n; i++) {
      if(lib[i] < min) {
         min = lib[i];
         ans++;
      } else if(lib[i] > max) {
         max = lib[i];
         ans++;
      }
   }

   cout << ans << endl;

   return 0;
}