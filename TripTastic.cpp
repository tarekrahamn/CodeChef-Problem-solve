#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimal distance between the mentor's room and the farthest room of a student
int minimalDistance(int T, vector<int> rows, vector<vector<int>> capacities, int K) {
    int N = rows[0]; // Number of rows
    int M = rows[1]; // Number of columns
    int totalCapacity = 0; // Total capacity of the hotel
    int maxCapacity = 0; // Maximum capacity of a room
    int mentorRow, mentorCol; // Row and column of the mentor's room

    // Find the total capacity of the hotel and the maximum capacity of a room
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            totalCapacity += capacities[i][j];
            maxCapacity = max(maxCapacity, capacities[i][j]);
        }
    }

    // If the total capacity is less than K+1, return -1
    if (totalCapacity < K + 1) {
        return -1;
    }

    // Find the row and column of the mentor's room
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (capacities[i][j] == maxCapacity) {
                mentorRow = i;
                mentorCol = j;
                break;
            }
        }
    }

    // Find the maximum distance between the mentor's room and the students' rooms
    int maxDistance = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int distance = max(abs(mentorRow - i), abs(mentorCol - j));
            maxDistance = max(maxDistance, distance);
        }
    }

    return maxDistance;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    for (int t = 0; t < T; t++) {
        vector<int> rows(2); // Vector to store the number of rows and columns
        vector<vector<int>> capacities; // Vector to store the capacities of rooms

        // Input the number of rows, columns, students, and capacities
        int N, M, K;
        cin >> N >> M >> K;
        rows[0] = N;
        rows[1] = M;
        capacities.resize(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> capacities[i][j];
            }
        }

        // Call the minimalDistance function to find the minimal distance between the mentor's room and the farthest room of a student
        int result = minimalDistance(T, rows, capacities, K);

        // Output the result
        cout << result << endl;
    }

    return 0;
}
