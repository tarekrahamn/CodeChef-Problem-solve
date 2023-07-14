#include <iostream>
#include <string>
#include <stack>

using namespace std;

string convertToRBS(const string& s) {
    string t;
    stack<char> brackets;

    for (char c : s) {
        if (brackets.empty()) {
            brackets.push(c);
        } else {
            char top = brackets.top();
            if (top == '(' && c == ')') {
                brackets.pop();
                t += "()";
            } else {
                brackets.push(c);
            }
        }
    }

    while (!brackets.empty()) {
        char top = brackets.top();
        brackets.pop();
        t = (top == '(') ? "(" + t + ")" : ")" + t + "(";
    }

    return t;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string rbs = convertToRBS(s);

        if (rbs.empty()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << rbs << "\n";
        }
    }

    return 0;
}
