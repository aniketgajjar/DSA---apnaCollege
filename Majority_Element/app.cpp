#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(freq == 0) {
                ans = nums[i];
            } 
            if(ans == nums[i]) {
                freq ++;
            } else {
                freq --;
            }
        }
        return ans;
    }
};
int main() {
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << obj.majorityElement(nums);

    return 0;
}