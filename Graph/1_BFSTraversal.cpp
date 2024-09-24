#include<bits/stdc++.h>
using namespace std;

void bfsTraversal(const vector<vector<int>>& graph, int numVertices, int startVertex) {
    vector<bool> visited(numVertices + 1, false);
    queue<int> q;
    q.push(startVertex);
    visited[startVertex] = true;
    
    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " ";
        for (int adjacentVertex : graph[currentVertex]) {
            if (!visited[adjacentVertex]) {
                visited[adjacentVertex] = true;
                q.push(adjacentVertex);
            }
        }
    }
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    int n;
    cout << "Enter the number of edges: ";
    cin >> n;
    vector<vector<int>> graph(V + 1);
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bfsTraversal(graph, V, 1);
    return 0;
}
