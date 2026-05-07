class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;
        for (auto c : s)
        {
            if ((!stk.empty()) && (stk.top().first == c))
            {
                stk.top().second++;
            }
            else
            {
                stk.push({c, 1});
            }

            if (stk.top().second == k)
            {
                stk.pop();
            }
        }

        string res = "";

        while (!stk.empty())
        {
            pair<int,int> p = stk.top();
            stk.pop();
            res += string(p.second, p.first);
        }

        reverse(res.begin(), res.end());

        return res;
    }
};