#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to compute the minimum number of scalar multiplications using DP (memoization)
int matrixChainMultiplicationMemo(int p[], int i, int j, vector<vector<int>>& dp) {
    // Base case: when there is only one matrix
    if (i == j)
        return 0;

    // If the value is already computed, return it
    if (dp[i][j] != -1)
        return dp[i][j];

    // Initialize minimum cost to a very large number
    int min_cost = INT_MAX;

    // Try placing parentheses at different positions
    for (int k = i; k < j; k++) {
        // Recursively calculate the cost for both partitions
        int cost = matrixChainMultiplicationMemo(p, i, k, dp)
                 + matrixChainMultiplicationMemo(p, k + 1, j, dp)
                 + p[i - 1] * p[k] * p[j];

        // Update minimum cost
        min_cost = min(min_cost, cost);
    }

    // Store the computed result in the memoization table
    dp[i][j] = min_cost;

    return dp[i][j];
}

int main() {
    // Example: dimensions of matrices A1, A2, A3, A4
    int dimensions[] = {10, 20, 30, 40, 30};
    int n = sizeof(dimensions) / sizeof(dimensions[0]);

    // Initialize a memoization table with -1 (indicating not computed)
    vector<vector<int>> dp(n, vector<int>(n, -1));

    // Find minimum cost of multiplying matrices from A1 to A4
    int min_cost = matrixChainMultiplicationMemo(dimensions, 1, n - 1, dp);

    // Output the result
    cout << "Minimum number of scalar multiplications: " << min_cost << endl;

    return 0;
}

