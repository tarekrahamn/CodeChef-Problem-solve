#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long getMaxTotalEnergy(int N, int M, int H, vector<int>& carCapacities, vector<int>& outletPowers) {
    sort(carCapacities.rbegin(), carCapacities.rend());  // Sort car capacities in descending order
    sort(outletPowers.rbegin(), outletPowers.rend());  // Sort outlet powers in descending order

    long long totalEnergy = 0;
    int carsCharged = min(N, M);  // Number of cars that can be charged (limited by the number of outlets)
    
    // Calculate the total energy stored in the cars
    for (int i = 0; i < carsCharged; i++) {
        int chargingTime = H / outletPowers[i];  // Charging time for the car using the current outlet
        totalEnergy += min((long long)carCapacities[i], (long long)chargingTime * outletPowers[i]);
    }
    
    return totalEnergy;
}

int main() {
    int T;
    cin >> T;  // Number of test cases
    
    for (int t = 0; t < T; t++) {
        int N, M, H;
        cin >> N >> M >> H;  // Number of cars, outlets, and hours for the current test case
        
        vector<int> carCapacities(N);
        vector<int> outletPowers(M);
        
        for (int i = 0; i < N; i++) {
            cin >> carCapacities[i];  // Energy capacities of the cars
        }
        
        for (int i = 0; i < M; i++) {
            cin >> outletPowers[i];  // Powers of the outlets
        }
        
        long long maxTotalEnergy = getMaxTotalEnergy(N, M, H, carCapacities, outletPowers);
        cout << maxTotalEnergy << endl;
    }
    
    return 0;
}
