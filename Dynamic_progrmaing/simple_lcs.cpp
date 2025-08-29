#include <iostream>
#include <string>
using namespace std;

// Helper function to find the LCS length using brute force recursion
int lcsBruteForce(string s1, string s2, int i, int j) {
    // Base case: If either string is exhausted, return 0
    if (i == 0 || j == 0) {
        return 0;
    }

    // If the current characters match, add 1 to the LCS and move both pointers
    if (s1[i - 1] == s2[j - 1]) {
        return 1 + lcsBruteForce(s1, s2, i - 1, j - 1);
    }

    // If the current characters don't match, take the maximum of two possibilities:
    // 1. Exclude the current character from the first string
    // 2. Exclude the current character from the second string
    return max(lcsBruteForce(s1, s2, i - 1, j), lcsBruteForce(s1, s2, i, j - 1));
}

int main() {
    string s1 = "ABCBDAB";
    string s2 = "BDCAB";

    int lcsLength = lcsBruteForce(s1, s2, s1.length(), s2.length());

    cout << "Length of Longest Common Subsequence: " << lcsLength << endl;

    return 0;
}
