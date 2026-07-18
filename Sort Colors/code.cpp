#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    Solution obj;

    // Input
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Function Call
    obj.sortColors(nums);

    // Output
    cout << "Sorted Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}