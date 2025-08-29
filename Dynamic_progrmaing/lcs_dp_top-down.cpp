#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Helper function to find LCS using top-down approach with memoization
int lcsTopDown(string& s1, string& s2, int i, int j, vector<vector<int>>& memo) {
    // Base case: If either string is exhausted, return 0
    if (i == 0 || j == 0) {
        return 0;
    }

    // Check if the result is already calculated
    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    // If characters match, add 1 to the result and move both pointers
    if (s1[i - 1] == s2[j - 1]) {
        memo[i][j] = 1 + lcsTopDown(s1, s2, i - 1, j - 1, memo);
    } else {
        // If characters don't match, take the maximum of excluding either character
        memo[i][j] = max(lcsTopDown(s1, s2, i - 1, j, memo), lcsTopDown(s1, s2, i, j - 1, memo));
    }

    return memo[i][j];
}

int main() {
    string s1 = "ABCBDAB";
    string s2 = "BDCAB";

    int n = s1.length();
    int m = s2.length();

    // Initialize memo table with -1
    vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));

    int lcsLength = lcsTopDown(s1, s2, n, m, memo);
    cout << "Length of Longest Common Subsequence (Top-Down): " << lcsLength << endl;

    return 0;
}
