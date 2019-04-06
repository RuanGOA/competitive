from Queue import Queue

def verify(y, x, maxy, maxx):
    return (x > 0 and x <= maxx and y > 0 and y <= maxy)

def griderson(char, fire, lin, col, grid):

    move_x = ( 0, 0, 1, -1)
    move_y = (-1, 1, 0,  0)
    kiwi = Queue()
    visited_fire = [[False]*(col+1) for x in xrange(lin+1)]
    visited_fire[fire[0]][fire[1]] = True

    visited_char = [[False]*(col+1) for x in xrange(lin+1)]
    visited_char[char[0]][char[1]] = True
    kiwi.put(fire)
    kiwi.put(char)

    while not kiwi.empty():
        
        y, x = kiwi.get()
        for i in xrange(4):
            new_y, new_x = y + move_y[i], x + move_x[i]

            if visited_fire[y][x]:
                if verify(new_y, new_x, lin, col) and\
                        grid[new_y][new_x] != '#':
                    
                    if grid[new_y][new_x] == 'E':
                        return 'N'

                    visited_fire[new_y][new_x] = True
                    kiwi.put((new_y, new_x))

            elif visited_char[y][x]:
                if verify(new_y, new_x, lin, col) and\
                    grid[new_y][new_x] != '#':

                    if grid[new_y][new_x] == 'E':
                        return 'Y'

                    visited_char[new_y][new_x] = True
                    kiwi.put((new_y, new_x))

case_test = int(raw_input())
for case in xrange(case_test):
    lin, col = map(int, raw_input().split())
    grid = [[None] * (lin+2)]
    for i in xrange(1, lin+1):

        grid.append([None])
        string = raw_input()
        for j in xrange(col):

            grid[i].append(string[j])
            
            if string[j] == 'F':
                fire = (i, j+1)

            if string[j] == 'S':
                start = (i, j+1)

            if string[j] == 'E':
                exit = (i, j+1)

    print griderson(start, fire, lin, col, grid)
