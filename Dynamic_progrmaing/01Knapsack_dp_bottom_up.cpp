#include <iostream>
#include <vector>
using namespace std;

int knapsackDP(vector<int>& weight, vector<int>& value, int capacity) {
    int n = weight.size();

    // Create a DP table where dp[i][w] represents the maximum value
    // for the first i items and a knapsack capacity of w
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

    // Base case: Fill the first row
    for (int w = 0; w <= capacity; w++) {
        if (weight[0] <= w) {
            dp[0][w] = value[0];
        }
    }

    // Fill the rest of the DP table
    for (int i = 1; i < n; i++) {
        for (int w = 0; w <= capacity; w++) {
            // Exclude the current item
            int exclude = dp[i - 1][w];

            // Include the current item (if weight allows)
            int include = 0;
            if (weight[i] <= w) {
                include = value[i] + dp[i - 1][w - weight[i]];
            }

            // Take the maximum of including or excluding the item
            dp[i][w] = max(include, exclude);
        }
    }

    // The answer is in the last cell of the table
    return dp[n - 1][capacity];
}

int main() {
    int capacity = 8;
    vector<int> weight = {2, 3, 4, 5};
    vector<int> value = {1, 2, 5, 6};

    cout << knapsackDP(weight, value, capacity) << endl;
    return 0;
}

