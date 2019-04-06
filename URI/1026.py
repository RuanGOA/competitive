while True:
    try:
        n1, n2 = map(int, raw_input().split())
        print n1 ^ n2

    except EOFError:
        break
