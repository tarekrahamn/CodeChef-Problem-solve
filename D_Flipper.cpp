#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> neighbors(n);
    for (int i = 0; i < n; i++) {
        cin >> neighbors[i];
    }

    vector<bool> visited(n + 1, false);
    int minDances = 0;
    int maxDances = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            unordered_set<int> danceGroup;
            int curr = i;
            while (!visited[curr]) {
                visited[curr] = true;
                danceGroup.insert(curr);
                curr = neighbors[curr - 1];
            }

            if (danceGroup.size() > 1) {
                minDances++;
                maxDances += danceGroup.size() - 1;
            }
        }
    }

    maxDances += minDances;
    if (minDances == 0) {
        minDances = 1;
    }

    cout << minDances << " " << maxDances << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
