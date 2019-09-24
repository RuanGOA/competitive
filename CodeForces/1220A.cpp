#include <bits/stdc++.h>

using namespace std;

string stri;
int n;
int lib[5]; //[o, z, r, e, n] 

void func(char var) {
    if(var == 'o') lib[0]++;
    else if(var == 'z') lib[1]++;
    else if(var == 'r') lib[2]++;
    else if(var == 'e') lib[3]++;
    else if(var == 'n') lib[4]++;
}

int main() {
    cin >> n;
    cin >> stri;

    char var;
    for(int i = 0; i < stri.length(); i++) {
        func(stri[i]);
    }

    int minO = min(lib[4], min(lib[0], lib[3]));

    lib[4] -= minO;
    lib[0] -= minO;
    lib[3] -= minO;

    for(int i = 0; i < minO; i++)
        printf("1 ");
    
    int minZ = (n - (minO * 3))/4;
    for(int i = 0; i < minZ; i++) {
        printf("0 ");
    }
}