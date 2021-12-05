class Solution:
    def __init__(self):
        self.x_axis = [0, 1, 0, -1]
        self.y_axis = [1, 0, -1, 0]
        self.qnt_rows = 0
        self.qnt_columns = 0
        
    def __verify_border(self, y, x):
        return y < self.qnt_rows and x < self.qnt_columns and y >= 0 and x >= 0
        
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        self.qnt_rows = len(image)
        self.qnt_columns = len(image[0])
        
        cel_queue = []
        cel_queue.append((sr, sc)) #y, x
        cel_visited = set()
        curr_color = image[sr][sc] #y, x
        
        x_curr, y_curr = None, None
        while len(cel_queue) > 0:
            y_curr, x_curr = cel_queue.pop(0) #y, x
            
            for i in range(4):
                x_cache = x_curr + self.x_axis[i]
                y_cache = y_curr + self.y_axis[i]
                if self.__verify_border(y_cache, x_cache) \
                    and not (y_cache, x_cache) in cel_visited \
                    and (image[y_cache][x_cache] == curr_color):
                    cel_queue.append((y_cache, x_cache))
                    
            image[y_curr][x_curr] = newColor #y, x
            cel_visited.add((y_curr, x_curr)) #y, x
        
        return image  
