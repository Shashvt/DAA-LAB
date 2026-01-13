#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxsubarr(vector<int>& arr) {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            currentSum = max(arr[i], currentSum + arr[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    Solution s1;

    vector<int> arr = { -2, -5, 6, -2, -3, 1, 5, -6 };

    int result = s1.maxsubarr(arr);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
