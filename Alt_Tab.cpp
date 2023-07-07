#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string getLastTwoCharacters(const string& s) {
    if (s.length() <= 2)
        return s;
    else
        return s.substr(s.length() - 2);
}

string altTabOrder(int N, const vector<string>& programs) {
    unordered_map<string, int> programCount;
    vector<pair<int, string>> programOrder;

    for (int i = 0; i < N; i++) {
        const string& program = programs[i];
        programCount[program]++;
        programOrder.push_back(make_pair(i, program));
    }

    sort(programOrder.begin(), programOrder.end(),
         [&](const pair<int, string>& a, const pair<int, string>& b) {
             if (programCount[a.second] != programCount[b.second])
                 return programCount[a.second] > programCount[b.second];
             else
                 return a.first > b.first;
         });

    string result;
    for (const auto& p : programOrder) {
        result += getLastTwoCharacters(p.second);
    }
    return result;
}

int main() {
    int N;
    cin >> N;

    vector<string> programs(N);
    for (int i = 0; i < N; i++) {
        cin >> programs[i];
    }

    string order = altTabOrder(N, programs);
    cout << order << endl;

    return 0;
}
