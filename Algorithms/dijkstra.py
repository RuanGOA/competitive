from Queue import PriorityQueue

maxn = 100
inf = 10000000000
lst_adj = [ [] for i in xrange(maxn) ]
distance = [inf] * maxn

def dijkstra_with_list_visited(start_node): # Visto em sala
    nodes_visited = [False] * maxn
    my_priority_queue = PriorityQueue()
    distance[start_node] = 0
    my_priority_queue.put( (0, start_node) )

    while not my_priority_queue.empty():
        dist, node = my_priority_queue.get()
        nodes_visited[node] = True

        for node_neight, dist_street in lst_adj[node]:
            if not nodes_visited[node_neight] and distance[node_neight] > distance[node] + dist_street:
                distance[node_neight] = distance[node] + dist_street
                my_priority_queue.put( (distance[node_neight], node_neight) )

def dijkstra_without_list_visited(start_node): # Outra forma de fazer sem lista de visitados
    my_priority_queue = PriorityQueue()
    distance[start_node] = 0
    my_priority_queue.put( (0, start_node) )

    while not my_priority_queue.empty():
        dist, node = my_priority_queue.get()

        if distance[node] < dist:
            continue

        for node_neight, dist_street in lst_adj[node]:
            if distance[node_neight] > distance[node] + dist_street:
                distance[node_neight] = distance[node] + dist_street
                my_priority_queue.put( (distance[node_neight], node_neight) )

nodes, edges = map(int, raw_input().split())

for i in xrange(edges):
    city1, city2, dist_street = map(int, raw_input().split())
    lst_adj[city1].append((city2, dist_street))
    lst_adj[city2].append((city1, dist_street))

start_node = int(raw_input())

dijkstra_with_list_visited(start_node)

print distance
