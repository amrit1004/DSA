#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool detectCycleBFS(int src, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<pair<int, int>> q; // (current node, parent node)
    q.push({src, -1});
    visited[src] = true;

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            } 
            else if (neighbor != parent) {
                return true; // Cycle detected
            }
        }
    }
    return false;
}

bool hasCycle(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (detectCycleBFS(i, adj, visited))
                return true;
        }
    }
    return false;
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> adj(V);

    // Example graph
    adj[0] = {1, 3};
    adj[1] = {0, 2};
    adj[2] = {1, 3};
    adj[3] = {0, 2, 4};
    adj[4] = {3};

    if (hasCycle(V, adj))
        cout << "Cycle detected\n";
    else
        cout << "No cycle detected\n";

    return 0;
}
