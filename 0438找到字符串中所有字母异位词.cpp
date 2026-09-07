class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        vector<int> pcount(26);
        vector<int> scount(26);
        if (s.size() < p.size()) return vector<int>{};
        for (int i = 0; i < p.size(); i++) {
            pcount[p[i] - 'a']++;
        }

        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            scount[s[r] - 'a']++;
            if (r - l + 1 == p.size()) {
                if (pcount == scount) ans.push_back(l);
                scount[s[l] - 'a']--;
                l++;
            }
        }
        return ans;
    }
};