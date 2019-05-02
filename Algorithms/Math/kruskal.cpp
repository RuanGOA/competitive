typedef long long ll;
ll kruskal(int vertices, int edges){
  sort(e, e + vertices);
  unionFind u = unionFind(vertices + 1);
  
  ll ans = 0;
  for(int i = 0; i < edges; i++){
    if(!u.isSameSet(e[i].to, e[i].from)){
      ans += e[i].weight;
      u.unionSet(e[i].to, e[i].from)
    }
  }
  return ans;
}
