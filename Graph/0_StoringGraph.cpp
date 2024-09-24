#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int N; // number of edges
    cin >> N;
    //input all the edges 1 by one

    //adjacancy matrix
    vector<vector<int>> graph(m+1, vector<int>(n+1, 0));
    for(int i = 0; i < N; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    // adjacancy list
    vector<vector<int>> graph(m+1);
    for(int i = 0; i < N; i++) {
        int u, v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
}