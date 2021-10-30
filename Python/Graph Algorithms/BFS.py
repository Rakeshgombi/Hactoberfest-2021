'''
The purpose of the algorithm is to mark each vertex as visited while avoiding cycles.

Algorithm:

* Start by putting any one of the graph's vertices at the back of a queue.
* Take the front item of the queue and add it to the visited list.
* Create a list of that vertex's adjacent nodes. Add the ones which aren't in the visited list to the back of the queue.
* Keep repeating steps 2 and 3 until the queue is empty.

This program is to print BFS traversal
from a given source vertex. BFSTraversel(root)
traverses vertices reachable from root.
'''
from collections import defaultdict, deque

class BFS:

    # create default dictionary to store graph
    def __init__(self):
        self.graph = defaultdict(list)

    # add edge to graph
    def addEdge(self, u, v):
        self.graph[u].append(v)

    # traverse and print BFS of graph
    def BFSTraversel(self, root):

        visited = []

        queue = deque([root])
        visited.append(root)

        while queue:
            vertex = queue.popleft()
            print(f'{vertex}  ')

            for neighbour in self.graph[vertex]:
                if neighbour not in visited:
                    visited.append(neighbour)
                    queue.append(neighbour)

# main funciton
if __name__ == '__main__':
    bfs = BFS()

    total_edges = int(input('Enter the no of edges you want: '))
    
    for i in range(total_edges):
        u,v = map(int, input(f'Enter edge {i+1}: ').split())
        bfs.addEdge(u,v)

    root_node = eval(input('Enter the root node: '))
    bfs.BFSTraversel(root_node)

'''
Enter the no of edges you want: 6
Enter edge 1: 0 1
Enter edge 2: 0 2
Enter edge 3: 1 3
Enter edge 4: 3 4
Enter edge 5: 2 5
Enter edge 6: 4 5
Enter the root node: 0
0
1
2
3
5
4

'''
