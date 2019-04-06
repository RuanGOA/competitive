#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  
  int c;
  for(int i = 0; i < n; i++){
    scanf("%d", &c);
    if(c % 2 == 0) printf("%d\n", c/2);
    else printf("%d\n", 1 + (c-3)/2);                                           
  }
  return 0;
}
