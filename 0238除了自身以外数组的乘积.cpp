class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int lp = 1;
        int rp = 1;
        int l = 0;
        int r = nums.size() - 1;
        while (l < nums.size() && r >= 0) {
            ans[l] *= lp;
            ans[r] *= rp;
            lp *= nums[l++];
            rp *= nums[r--];
        }
        return ans;
    }
};