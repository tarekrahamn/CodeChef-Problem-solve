// #include <iostream>
// using namespace std;

// int minimumMoves(int N) {
//     // If N is 1 or 2, no moves are required as bishops are already in their final positions
//     if (N == 1 || N == 2) return 0;
    
//     // If N is odd, bishops need to be moved to the diagonals with larger indices
//     // as they are initially placed on diagonals with smaller indices
//     if (N % 2 != 0) return N / 2;
    
//     // If N is even, bishops need to be moved to the diagonals with smaller indices
//     // as they are initially placed on diagonals with larger indices
//     else return N / 2 + 1;
// }

// int main() {
//     int T;
//     cin >> T; // Number of test cases

//     while (T--) {
//         int N;
//         cin >> N; // Size of the matrix
        
//         int moves = minimumMoves(N);
//         cout << moves << endl; // Output minimum number of moves
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int minimumMoves(int N) {
    // If N is 1, no moves are required as bishop is already in its final position
    if (N == 1) return 0;
    
    // If N is even, bishops can be placed on all diagonals, so no moves are required
    if (N % 2 == 0) return 0;
    
    // If N is odd, bishops can be placed on all diagonals except the middle one,
    // so one move is required to place the bishop on the middle diagonal
    else return 1;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Size of the matrix
        
        int moves = minimumMoves(N);
        cout << moves << endl; // Output minimum number of moves
    }

    return 0;
}
