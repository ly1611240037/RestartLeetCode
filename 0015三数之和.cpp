class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i - 1] == nums[i]) continue;
            int l = i + 1;
            int r = nums.size() - 1;
            int target = -nums[i];
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    res.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l - 1] == nums[l]) l++;
                    while (l < r && nums[r + 1] == nums[r]) r--;
                }
                else if (sum < target) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        return res;
    }
};