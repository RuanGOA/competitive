#include <bits/stdc++.h>                                                        
using namespace std;

int main(){
  string str, poke = "Bulbasaur";
  cin >> str;
  
  int size = str.size();
  //1B 1b 2a 2u 1l 1s 1r
  //B = 0
  //b = 1
  //s = 2
  //l = 3
  //r = 4
  //a = 5
  //u = 6
  int save[7];
  memset(save, 0, sizeof(save)); 
  
  for(int i = 0; i < size; i++){
    if     (str[i] == 'B') save[0] += 1;
    else if(str[i] == 'b') save[1] += 1;
    else if(str[i] == 's') save[2] += 1;
    else if(str[i] == 'l') save[3] += 1;
    else if(str[i] == 'r') save[4] += 1;
    else if(str[i] == 'a') save[5] += 1;
    else if(str[i] == 'u') save[6] += 1;
  }

  int minor = 10000000;
  for(int i = 0; i < 7; i++){
    if(i>4){ if((int) save[i]/2 < minor) minor = save[i]/2;}
    else if(save[i] < minor) minor = save[i];
  }

  printf("%d\n", minor);    
  return 0;
}
