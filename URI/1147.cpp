def verify(y, x):
    return (x <= 8 and x >= 1 and y <= 8 and y >= 1)

def decod(letra):
    coordenadas = {  "a":1,
                     "b":2,
                     "c":3,
                     "d":4,
                     "e":5,
                     "f":6,
                     "g":7,
                     "h":8}

    return coordenadas[letra]

xp = (-1,  1)
yp = (-1, -1)

xc = (-2, -2,  2,  2, -1,  1, 1, -1)
yc = ( 1, -1,  1, -1, -2, -2, 2,  2)

caso = 0
while True:
        caso += 1
        pos = raw_input()
        if pos == "0": break

        tabuleiro = [['n']*9 for x in xrange(9)]
        pos_pea = []
        pos_cav = (int(pos[0]), decod(pos[1]))

        for i in xrange(8):
            pos = raw_input()
            pos_pea.append((int(pos[0]), decod(pos[1])))

        for i in pos_pea:
            for j in xrange(2):
                new_x = i[1] + xp[j]
                new_y = i[0] + yp[j]

                if verify(new_y, new_x):
                    tabuleiro[new_y][new_x] = "t"

        cont = 0
        for i in xrange(8):
            new_x = pos_cav[1] + xc[i]
            new_y = pos_cav[0] + yc[i]
            if verify(new_y, new_x) and \
               tabuleiro[new_y][new_x] != "t":
                   cont += 1

        print "Caso de Teste #%i: %i movimento(s)." % (caso ,cont)
