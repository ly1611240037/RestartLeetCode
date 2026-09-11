class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = 0;
        int ans = nums[0];
        int pre = 0;
        for (int r = 0; r < nums.size(); r++) {
            pre = max(pre + nums[r], nums[r]);
            ans = max(pre, ans);
        }
        return ans;
    }
};