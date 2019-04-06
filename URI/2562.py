def dfs(lis, e, vis):
    for i in lis[e]:
        if not vis[i]:
            vis[i] = True
            bfs(lis, i, vis)

while True:
    try:
        n, m = map(int, raw_input().split())
        lis = []
        for i in range(n+1):
            lis.append([i])

        for i in range(1, m + 1):
            n1, n2 = map(int, raw_input().split())
            lis[n1].append(n2)
            lis[n2].append(n1)

        e = int(raw_input())
        q = 1
        vis = [False] * len(lis)
        vis[e] = True

        dfs(lis, e, vis)

        contador = 0
        for i in vis:
            if i:
                contador += 1
        print contador
        
    except EOFError:
        break
