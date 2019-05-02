def union(x, y):
    paix = findPai(y)
    paiy = findPai(x)
    
    par[paix] = paiy
    #rank?
    #if(rank[paix] > rank[paiy])
