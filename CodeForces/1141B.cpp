#include <bits/stdc++.h>
#define MAXS 200010

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], cont = 0, cache = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] == 1)
            cache++;
        else
            cache = 0;

        if(cache > cont) cont = cache;
    }

    if(cache > 0){
        int c = 0;
        while(true){
            if(a[c] == 0) break;
            else
                cache++;
            
            c++;
        }

        if(cache > cont) cont = cache;
    }
    
    printf("%d\n", cont);

    return 0;
}
