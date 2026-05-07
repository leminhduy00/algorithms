class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;
        for (auto c : s)
        {
            if ((!stk.empty()) && (stk.top().first == c))
            {
                if (stk.top().second == k -1)
                {
                    while ((!stk.empty()) && (stk.top().first == c))
                        stk.pop();
                }
                else
                {
                    stk.push({c, stk.top().second + 1});
                }
                continue;
            }

                stk.push({c, 1});
        }

        string res;
        while (!stk.empty())
        {
            res.insert(0, 1, stk.top().first);
            stk.pop();
        }

        return res;
    }
};