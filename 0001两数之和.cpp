class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            auto it = hash.find(target - nums[i]);
            if (it != hash.end()) {
                return {i, it->second};
            }
            hash[nums[i]] = i;
        }
        return vector<int>{0, 0};
    }
};