#include <iostream>
#include <climits>
using namespace std;

// Function to compute the minimum number of scalar multiplications
int matrixChainMultiplication(int p[], int i, int j) {
    // Base case: when only one matrix is involved
    if (i == j)
        return 0;

    // Initialize minimum cost to a very large number
    int min_cost = INT_MAX;

    // Try placing parentheses at different positions
    for (int k = i; k < j; k++) {
        // Recursively calculate the cost for both partitions
        int cost = matrixChainMultiplication(p, i, k)
                 + matrixChainMultiplication(p, k + 1, j)
                 + p[i - 1] * p[k] * p[j];

        // Update minimum cost
        if (cost < min_cost)
            min_cost = cost;
    }

    return min_cost;
}

int main() {
    // Example: dimensions of matrices A1, A2, A3, A4
    // Matrices dimensions: A1 (10x20), A2 (20x30), A3 (30x40), A4 (40x30)
    int dimensions[] = {30, 35, 15, 5, 10};
    int n = sizeof(dimensions) / sizeof(dimensions[0]);

    // Find minimum cost of multiplying matrices from A1 to A4
    int min_cost = matrixChainMultiplication(dimensions, 1, n - 1);

    // Output the result
    cout << "Minimum number of scalar multiplications: " << min_cost << endl;

    return 0;
}

