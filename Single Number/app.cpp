#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans = ans ^ val;
        }
        return ans;
    }
};

int main() {
    Solution obj;

    // Test Input
    vector<int> nums = {4, 1, 2, 1, 2};

    // Function Call
    int result = obj.singleNumber(nums);

    // Output
    cout << "Single Number: " << result << endl;

    return 0;
}