class Solution {
public:
    int trap(vector<int>& height) {
        int maxHeight = height[0];
        int mid = 0;
        for (int i = 1; i < height.size(); i++) {
            if (height[i] > maxHeight) {
                maxHeight = height[i];
                mid = i;
            }
        }

        int sum = 0;
        int curHeight = 0;
        for (int i = 0; i < mid; i++) {
            if (height[i] >= curHeight) {
                curHeight = height[i];
            } else {
                sum += curHeight - height[i];
            }
        }
        curHeight = 0;
        for (int i = height.size() - 1; i > mid; i--) {
            if (height[i] >= curHeight) {
                curHeight = height[i];
            } else {
                sum += curHeight - height[i];
            }
        }
        return sum;
    }
};