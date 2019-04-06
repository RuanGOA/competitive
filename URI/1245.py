while True:
    try:
        rack = {}
        amount = int(raw_input())
        for i in xrange(amount):
            size, side = raw_input().split()
            if rack.get(size, '.') == '.':
                rack[size] = [0, 0]
                if side == 'D':
                    rack[size][1] += 1
                else:
                    rack[size][0] += 1

            else:
                if side == 'D':
                    rack[size][1] += 1
                else:
                    rack[size][0] += 1

        total = 0

        for val in rack.values():
            if val[0] < val[1]:
                total += val[0]

            else:
                total += val[1]

        print total
    
    except EOFError:
        break
