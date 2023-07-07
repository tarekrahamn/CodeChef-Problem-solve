#include <iostream>
using namespace std;

void run() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int score1=a1 + a2 + a3;
    int score2=b1 + b2 + b3;
    int aliceScore = score1 - min(min(a1, a2), a3);
    int bobScore = score2 - min(min(b1, b2), b3);
    
    if (aliceScore > bobScore) {
        cout<< "Alice" <<endl;
    } else if (aliceScore < bobScore) {
        cout<<"Bob"<<endl;
    } else {
        cout<< "Tie" <<endl;
    }
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        run();
    }
    
    return 0;
}
