class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> check;
        for (auto str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            if (check.find(s) != check.end()) {
                check[s].push_back(str);
            }
            else
            {
                check[s].push_back(str);
            }
        }

        for (auto v : check) {
            res.push_back(v.second);
        }
        return res;
    }
};