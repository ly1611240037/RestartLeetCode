class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> num_set;
        for (auto num : nums) {
            num_set.insert(num);
        }
        int ans = nums.size() == 0 ? 0 : 1;
        for (auto num : num_set) {
            if (num_set.count(num - 1)) continue;
            int curNum = num;
            int len = 1;
            while (num_set.count(curNum+1)) {
                curNum++;
                len++;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};