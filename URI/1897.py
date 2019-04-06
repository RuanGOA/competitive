from Queue import Queue
visited = [False] * 20005
distance = [-1] * 20005

def verify(n):
    return (n >= -10000 and n <= 10000)

def bfs(a, b):
    kiwi = Queue()
    kiwi.put(a)
    visited[a] = True
    distance[a] = 0
    while not kiwi.empty():
        number = kiwi.get()
        poss_list = (number*2, number*3,
                     number/2, number/3,
                     number+7, number-7)

        for i in poss_list:
            if verify(i) and not visited[i]:
                visited[i] = True
                kiwi.put(i)
                distance[i] = distance[number] + 1

            if i == b:
                return distance[i]
                        
n1, n2 = map(int, raw_input().split())
print bfs(n1, n2)
