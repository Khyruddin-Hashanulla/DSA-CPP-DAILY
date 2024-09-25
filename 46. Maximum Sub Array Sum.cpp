#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0, maxSum = INT_MIN;
        for(int val : nums){
            currentSum += val;
            maxSum = max(currentSum, maxSum);
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << endl;
    return 0;
}