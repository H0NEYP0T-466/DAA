#include <iostream>
#include <vector>
using namespace std;

// Helper function to solve the 0/1 knapsack problem using recursion and memoization
int knapsackTopDown(vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int>>& memo) {
    // Base case: If we are at the first item
    if (index == 0) {
        if (weight[0] <= capacity) {
            return value[0];
        }
        return 0;
    }

    // Check if the result is already computed
    if (memo[index][capacity] != -1) {
        return memo[index][capacity];
    }

    // Option 1: Exclude the current item
    int exclude = knapsackTopDown(weight, value, index - 1, capacity, memo);

    // Option 2: Include the current item (if it fits)
    int include = 0;
    if (weight[index] <= capacity) {
        include = value[index] + knapsackTopDown(weight, value, index - 1, capacity - weight[index], memo);
    }

    // Store the result in the memo table
    memo[index][capacity] = max(include, exclude);

    // Return the result
    return memo[index][capacity];
}

int main() {
    int capacity = 8;
    vector<int> weight = {2, 3, 4, 5};
    vector<int> value = {1, 2, 5, 6};

    int n = weight.size();

    // Initialize a memoization table with -1
    vector<vector<int>> memo(n, vector<int>(capacity + 1, -1));

    // Solve the problem
    int max_value = knapsackTopDown(weight, value, n - 1, capacity, memo);

    // Print the result
    cout << "Maximum value: " << max_value << endl;

    return 0;
}

