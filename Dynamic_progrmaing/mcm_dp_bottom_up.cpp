#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to compute the minimum number of scalar multiplications using bottom-up DP
int matrixChainMultiplicationBottomUp(int p[], int n) {
    // Create a 2D table to store minimum multiplication costs
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Length of chain (l) starts from 2 (multiplying two matrices)
    for (int length = 2; length < n; length++) {
        for (int i = 1; i < n - length + 1; i++) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;

            // Try placing parentheses at different positions
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    // Return the minimum cost for multiplying the entire chain
    return dp[1][n - 1];
}

int main() {
    // Example: dimensions of matrices A1, A2, A3, A4
    int dimensions[] = {10, 20, 30, 40, 30};
    int n = sizeof(dimensions) / sizeof(dimensions[0]);

    // Find minimum cost of multiplying matrices from A1 to A4
    int min_cost = matrixChainMultiplicationBottomUp(dimensions, n);

    // Output the result
    cout << "Minimum number of scalar multiplications: " << min_cost << endl;

    return 0;
}

