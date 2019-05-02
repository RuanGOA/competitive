int find (int a){
  if(pai[a] == a) return a;
  return pai[a] = find(pai[a]);
}

void union(int a, int b){
  int pai_a = find(a);
  int pai_b = find(b);
  
  if(pai_a == pai_b]) return;
  if(rank[pai_a] > rank[pai_b]){
    rank[pai_a] += rank[pai_b];
    pai[pai_b] = pai_a;
  } else {
    rank[pai_b] += rank[pai_a];
    pai[pai_a] = pai_b;
  }
}
