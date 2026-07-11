#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for(int val : nums) {
            currSum += val;
            maxSum = max(currSum, maxSum);

            if(currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main() {
    Solution obj;

    // Test Input
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    // Function Call
    int result = obj.maxSubArray(nums);

    // Output
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}