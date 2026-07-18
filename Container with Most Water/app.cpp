#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public: 

    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentHeight = min(height[left], height[right]);
            int currentWidth = right - left;
            int currentArea = currentHeight * currentWidth;
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};

int main() {
    Solution obj;

    // Test Input
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    // Function Call
    int result = obj.maxArea(height);

    // Output
    cout << "Maximum Area: " << result << endl;

    return 0;
}