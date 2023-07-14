#include <iostream>
#include <vector>
#include <set>

using namespace std;

void dfs(int v, const vector<vector<int>>& adj, vector<int>& child_branches, set<int>& cut_edges) {
    int num_child_branches = 0;
    for (int u : adj[v]) {
        dfs(u, adj, child_branches, cut_edges);
        num_child_branches += child_branches[u];
    }
    child_branches[v] = num_child_branches % 2;
    if (child_branches[v] == 0 && v != 0) {
        cut_edges.insert(adj[v][0]);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            u--; // adjust to 0-based indexing
            v--;
            adj[u].push_back(v);
        }

        vector<int> child_branches(n, 0);
        set<int> cut_edges;

        dfs(0, adj, child_branches, cut_edges);

        if (child_branches[0] == 1) {
            cout << -1 << endl;
        } else {
            cout << cut_edges.size() << endl;
            for (int edge : cut_edges) {
                cout << edge + 1 << " "; // adjust to 1-based indexing
            }
            cout << endl;
        }
    }

    return 0;
}
