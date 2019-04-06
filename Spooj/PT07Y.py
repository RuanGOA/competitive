def dfs(vis, adj, i):
    vis[i] = True
    for k in adj[i]:
        if not vis[k]:
            vis[k] = True
            dfs(vis, adj, k)

        else:
            vis[k] = False
            return

n, m = map(int, raw_input().split())
vis = [False] * (n+1)
adj = [[] for x in xrange(n+1)]
for i in xrange(m):
    u, v = map(int, raw_input().split())
    adj[u].append(v)

dfs(vis, adj, 1)
for x in xrange(1, n+1):
    if not vis[x]:
        print "NO"
        break
    
    if x == n:
        print "YES"
        break
