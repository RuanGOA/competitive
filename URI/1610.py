case_tests = int(raw_input())
for case in xrange(case_tests):
    docs, pen = map(int, raw_input().split())
    adj = [[] for x in xrange(docs+2)]
    menor = 100000000
    for i in xrange(pen):
        g1, g2 = map(int, raw_input().split())
        adj[g1].append(g2)
        if g1 < menor:
            menor = g1
    
    if pen == 1:
        print 'NAO'
        continue

    bfs
