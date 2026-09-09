class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> sum(nums.size() + 5);
        sum [0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum[i] = sum[i - 1] + nums[i];
        }

        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int tmp = sum[i];
            for (int j = 0; j <= i; j++) {
                if (tmp == k) ans++;
                tmp -= nums[j];
            }
        }
        return ans;
    }
};