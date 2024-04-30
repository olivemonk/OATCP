# Maximum Flow

## Approach

The maximum flow problem deals with determining the maximum amount of flow that can be sent from a source node to a sink node in a flow network. The Ford-Fulkerson algorithm is commonly used to solve this problem.

## Steps

1. **Initialize Flow:** Initialize the flow on each edge to zero.
2. **Find Augmenting Paths:**
   - While there exists an augmenting path from the source to the sink:
     - Find an augmenting path using a path-finding algorithm like breadth-first search (BFS).
     - Determine the maximum flow that can be sent along the augmenting path.
     - Update the flow along the augmenting path by incrementing the flow on each edge.
3. **Return Maximum Flow:** Return the maximum flow when no more augmenting paths can be found.

## Implementation Details

- Read the input graph from the file `input.txt`, which contains information about the number of nodes, the source node, the sink node, and the capacities of the edges.
- Implement the Ford-Fulkerson algorithm to find the maximum flow in the graph.
- Output the maximum flow to the file `output.txt`.


## Complexity Analysis

- **Time Complexity:** The Ford-Fulkerson algorithm can have varying time complexities depending on the choice of path-finding algorithm for finding augmenting paths. In the worst case, it can be O(E * f), where E is the number of edges and f is the maximum flow value. However, with certain optimizations like Edmonds-Karp algorithm using BFS, the time complexity is reduced to O(V * E^2), where V is the number of vertices.
- **Space Complexity:** The space complexity depends on the representation of the graph and the chosen data structures for implementing the algorithm. In general, it can range from O(V^2) to O(V * E), where V is the number of vertices and E is the number of edges.




