#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;

    int ai[n];
    for (int i = 0; i < n; i++) {
        cin >> ai[i];
    }

    sort(ai, ai +n);

    int hitsNeeded = 0;

    for (int i = 0; i < n; i++) {
        if (ai[i] <= 0) {
            continue;
        }

        hitsNeeded++;

        ai[i] -= p;

        for (int j = i + 1; j < n; j++) {
            ai[j] -= q;

            if (ai[j] <= 0) {
                ai[j] = 0;
            }
        }
    }

    cout << hitsNeeded << endl;

    return 0;
}
