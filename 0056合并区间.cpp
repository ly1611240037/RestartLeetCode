class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> v1, vector<int> v2){
            return v1[0] < v2[0];
        });
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            vector<int> v1 = res.back();
            vector<int> v2 = intervals[i];
            if (v1[1] >= v2[0]) {
                res.pop_back();
                res.push_back({v1[0], max(v1[1], v2[1])});
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};