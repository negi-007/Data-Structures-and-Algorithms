#include <bits/stdc++.h>
using namespace std;

void printPath(const vector<int>& path) {
    for (int v : path) {
        cout << v << " ";
    }
    cout << endl;
}

bool dfsTraversal(const vector<vector<int>>& graph, int src, int dest, vector<bool>& visited, vector<int>& path) {
    visited[src] = true;
    path.push_back(src);

    if (src == dest) {
        printPath(path);
        return true;
    }
    for (int v : graph[src]) {
        if (!visited[v]) {
            if (dfsTraversal(graph, v, dest, visited, path)) {
                return true;
            }
        }
    }
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
    vector<vector<int>> graph(V + 1);
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "Enter the source & destination: ";
    int src, dest;
    cin >> src >> dest;
    vector<bool> visited(V + 1, false);
    vector<int> path;
    if (!dfsTraversal(graph, src, dest, visited, path)) {
        cout << "No path found from " << src << " to " << dest << endl;
    }

    return 0;
}
