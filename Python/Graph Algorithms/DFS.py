'''
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

Algorithm:

* We will start by putting any one of the graph's vertex on top of the stack.
* After that take the top item of the stack and add it to the visited list of the vertex.
* Next, create a list of that adjacent node of the vertex. Add the ones which aren't in the visited list of vertexes to the top of the stack.
* Lastly, keep repeating steps 2 and 3 until the stack is empty.

This program is to print DFS traversal
from a given source vertex.
'''
from collections import defaultdict

class DFS:

    # create default dictionary to store graph
    def __init__(self):
        self.graph = defaultdict(list)

    # add edge to graph
    def addEdge(self, u, v):
        self.graph[u].append(v)

    # traverse and print DFS of graph
    def DFSTraversel(self, node, visited):

        if node not in visited:
            print(node)
            visited.append(node)
            for neighbour in self.graph[node]:
                self.DFSTraversel(neighbour, visited)
    
    def getDFS(self, node):
        visited = []
        self.DFSTraversel(node, visited)
    
# main funciton
if __name__ == '__main__':
    bfs = DFS()

    total_edges = int(input('Enter the no of edges you want: '))
    
    for i in range(total_edges):
        u,v = map(int, input(f'Enter edge {i+1}: ').split())
        bfs.addEdge(u,v)

    node = eval(input('Enter the node node: '))
    bfs.getDFS(node)

'''
Enter the no of edges you want: 6
Enter edge 1: 1 4
Enter edge 2: 5 7
Enter edge 3: 5 4
Enter edge 4: 3 5
Enter edge 5: 1 2
Enter edge 6: 2 6
Enter the node node: 1
1
4
2
6
'''
