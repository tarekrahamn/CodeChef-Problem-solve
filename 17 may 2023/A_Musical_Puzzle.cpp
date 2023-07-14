#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int getMinMelodies(string s) {
    int n = s.length();
    unordered_set<string> melodies;
    for (int i = 0; i < n - 1; i++) {
        string melody = s.substr(i, 2);
        melodies.insert(melody);
    }

    return melodies.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string melody;
        cin >> melody;

        int minMelodies = getMinMelodies(melody);
        cout << minMelodies << endl;
    }

    return 0;
}
