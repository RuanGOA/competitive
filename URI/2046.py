from Queue import Queue

def verify(x, y, l, c):
    return (x > 0 and x <= c and y > 0 and y <= l)

'''retorna a primeira sede que encontrar. Y sendo testado primeiro, pedido da questao
   e ainda apos isso, pela persistencia do erro, o X e testado logo apos
'''
def dij(start_x, start_y, mapa, l, c):
    dx = ( 0, 0,  -1, 1)
    dy = (-1, 1,  0,  0)
    visited = [[False]* (l+1) for x in xrange(c+1)]
    distance = [[10000000] * (l+1) for x in xrange(c+1)]
    kiwi = Queue()
    kiwi.put((0 ,start_y, start_x))
    distance[start_y][start_x] = 0
    visited[start_y][start_x] = True
    distance_s = 10000000 #teste de distancia
    
    while not kiwi.empty():
        d, y, x = kiwi.get()
        for i in xrange(4):
            new_y = y + dy[i]
            new_x = x + dx[i]
            if verify(new_x, new_y, l, c) and \
               not visited[new_y][new_x]:
                distance[new_y][new_x] = d + 1
                visited[new_y][new_x] = True
                kiwi.put((d + 1, new_y, new_x))
                if distance[new_y][new_x] < distance_s and \
                   mapa[new_y][new_x] == 's':
                    return (new_x, new_y)

contador = 0
while True:
    coluna, linha = map(int, raw_input().split())
    mapa = [['n'] * (coluna+1) for i in xrange(linha+1)]
    if linha == 0 or coluna == 0:
        break

    sedes = int(raw_input())
    for i in xrange(sedes):
        x_ans, y_ans = map(int, raw_input().split())
        mapa[y_ans][x_ans] = 's'

    ligacoes = int(raw_input())
    lig = []
    for i in xrange(ligacoes):
        x_ans, y_ans = map(int, raw_input().split())
        lig.append((x_ans, y_ans))

    contador += 1
    print "Instancia", contador
    for i in lig:
        x, y = dij(i[0], i[1], mapa, linha, coluna)
        print '%d %d' % (x, y)
    print
