class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> sm, tm;
        string res = s + "1";
        for (int i = 0; i < t.size(); i++) {
            tm[t[i]]++;
        }

        int l = 0;
        int cnt = 0;
        for (int r = 0; r < s.size(); r++) {
            sm[s[r]]++;
            if (sm[s[r]] <= tm[s[r]]) {
                cnt++;
            }
            while (l < r && sm[s[l]] > tm[s[l]]) {
                sm[s[l]]--;
                l++;
            }
            if (cnt == t.size()) {
                if (r - l + 1 < res.size()) {
                    res = s.substr(l, r - l + 1);
                }
            }
        }

        return res == s + "1" ? "" : res;
    } 
};