case_test = int(raw_input())
for z in xrange(case_test):
    n, m = map(int, raw_input().split())
    grid = []
    bit_list = []
    bit_list_vis = [[False]*(m) for x in xrange(n)]
    for i in xrange(n):
        grid.append([])
        string = raw_input()
        var = -1
        for j in xrange(len(string)):
            if string[j] == "0":
                var += 1
                grid[i].append(10000000)

            elif string[j] == "1":
                var += 1
                grid[i].append(0)
                bit_list.append((i, var))
                bit_list_vis[i][var] = True

    for i in xrange(n):
        for j in xrange(m):
            if not bit_list_vis[i][j]:
                for x in bit_list:
                    distance = (abs(i - x[0]) + abs(j - x[1]))
                    if grid[i][j] > distance:
                        grid[i][j] = distance

    for i in xrange(n):
        string = ""
        for j in xrange(m):
            if j == m-1:
                string += str(grid[i][j])

            else:
                string += str(grid[i][j]) + " "

        print string
    
    if z != case_test-1:
        print
