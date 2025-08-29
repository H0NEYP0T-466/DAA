#include<iostream>
#include<vector>
using namespace std;


int bruteforse01(vector<int>& weight, vector<int>& value, int index, int W) {
    // Base case: If we are at the first item, check if it can be included
    	//base case
	// if only one item then simply compare if its weight is ok then get otherwise no
	//since we are moving from right to left the base case should be when we reached last element
	//index == 0
    if (index == 0) {
        if (weight[0] <= W) {
            return value[0];  // Include the item if it fits
        }
        return 0;  // Exclude the item if it doesn't fit
    }

    // Include the current item if its weight is less than or equal to the remaining capacity
    int include = 0;
    if (weight[index] <= W) {
        include = value[index] + bruteforse01(weight, value, index - 1, W - weight[index]);
    }

    // Exclude the current item
    int exclude = bruteforse01(weight, value, index - 1, W);

    // Return the maximum of including or excluding the item
    return max(include, exclude);
}

int main() {
    int capacity = 8;
    vector<int> weight = {2, 3, 4, 5};
    vector<int> value = {1, 2, 5, 6};
    int index = weight.size() - 1;

    // Call the bruteforse01 function and print the result
    cout << bruteforse01(weight, value, index, capacity);
    return 0;
}
