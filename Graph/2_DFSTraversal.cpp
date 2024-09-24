#include <bits/stdc++.h>
using namespace std;

// Helper function to print the path
void printPath(const vector<int>& path) {
    for (int v : path) {
        cout << v << " ";
    }
    cout << endl;
}

// Modified DFS function to find and print the path from src to dest
bool dfsTraversal(const vector<vector<int>>& graph, int src, int dest, vector<bool>& visited, vector<int>& path) {
    visited[src] = true;  // Mark the current node as visited
    path.push_back(src);  // Add the current node to the path

    if (src == dest) {
        // If the destination is reached, print the path
        printPath(path);
        return true;  // Return true to indicate that the destination is found
    }

    // Traverse all adjacent vertices of the current vertex
    for (int v : graph[src]) {
        if (!visited[v]) {
            if (dfsTraversal(graph, v, dest, visited, path)) {
                return true;  // Stop further recursion once the destination is found
            }
        }
    }

    // Backtrack: Remove the current node from the path
    path.pop_back();
    return false;
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    int n;
    cout << "Enter the number of edges: ";
    cin >> n;

    vector<vector<int>> graph(V + 1);  // Adjusted for 1-based indexing
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  // Since it's an undirected graph
    }

    cout << "Enter the source & destination: ";
    int src, dest;
    cin >> src >> dest;

    vector<bool> visited(V + 1, false);  // Adjusted for 1-based indexing
    vector<int> path;  // To store the current path

    // Perform DFS traversal to find the path from src to dest
    if (!dfsTraversal(graph, src, dest, visited, path)) {
        cout << "No path found from " << src << " to " << dest << endl;
    }

    return 0;
}
