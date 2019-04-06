from Queue import Queue

def verify(x, y, l, c):
    return (x > 0 and x < l and y > 0 and y < c)

def grid(start_x, start_y, vis, mat, dis, l, c):
    dx = (0,  0, 1, -1, 1, -1,  1, -1)
    dy = (1, -1, 0,  0, 1, -1, -1,  1)
    fila = Queue()
    quantidade = 0
    dis[start_x][start_y] = 0
    vis[start_x][start_y] = True
    fila.put((start_x, start_y))
    while not fila.empty():
        x, y = fila.get()
        for i in xrange(8):
            new_x = x + dx[i]
            new_y = y + dy[i]
            if verify(new_x, new_y, l+1, c+1) and \
               not vis[new_x][new_y] and mat[new_x][new_y] == "1":
                   dis[new_x][new_y] = dis[x][y] + 1
                   vis[new_x][new_y] = True
                   fila.put((new_x, new_y))
                   if dis[new_x][new_y] > quantidade:
                       quantidade = dis[new_x][new_y]

    return quantidade

test_case = int(raw_input())
for i in xrange(test_case):
    linha, coluna = map(int, raw_input().split())
    mat = [[None] * (coluna+1) for x in xrange(linha+1)]
    dis = [[-1] * (coluna+1) for x in xrange(linha+1)]
    vis = [[False] * (coluna+1) for x in xrange(linha+1)]
    for l in xrange(1, linha+1):
        mat[l] = [None] + raw_input().split()

    x, y = map(int, raw_input().split())
    print grid(x, y, vis, mat, dis, linha, coluna)
