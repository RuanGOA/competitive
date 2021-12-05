class Solution:
    def __init__(self):
        self.y_axis = [0, 1, 0, -1]
        self.x_axis = [1, 0, -1, 0]
        self.visited = set()
        self.highest_island_size = 0
        
    
    def __verify_border(self, y, x):
        return y < self.rows and x < self.columns and y > -1 and x > -1
    
    def __calculate_island_size(self, y_init, x_init, matrix):
        count = 0
        propag_queue = []
        propag_queue.append((y_init, x_init))
        while len(propag_queue) > 0:
            y, x = propag_queue.pop(0)
            if not (y, x) in self.visited:
                count += 1
                for i in range(4):
                    y_cache = y + self.y_axis[i]
                    x_cache = x + self.x_axis[i]
                    if self.__verify_border(y_cache, x_cache) \
                        and not (y_cache, x_cache) in self.visited \
                        and matrix[y_cache][x_cache] == 1:
                        propag_queue.append((y_cache, x_cache))
                self.visited.add((y, x))
            
        if count > self.highest_island_size:
            self.highest_island_size = count
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        self.rows = len(grid)
        self.columns = len(grid[0])
        propag_queue = []
        propag_queue.append((0, 0))
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1 \
                    and not (i, j) in self.visited:
                    self.__calculate_island_size(i, j, grid)

        return self.highest_island_size
