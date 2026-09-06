class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        map<char, bool> m;
        for (int l = 0, r = 0; r < s.size(); r++) {
            while (m[s[r]] == true && l < r) {
                m[s[l]] = false;
                l++;
            }
            m[s[r]] = true;
            res = max(res, r - l + 1);
        }
        return res;
    }
};