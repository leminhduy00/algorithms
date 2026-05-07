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
                    stk.pop();
                }
                else
                {
                    stk.top().second++;
                }
                continue;
            }

                stk.push({c, 1});
        }

        string res;
        while (!stk.empty())
        {
            int count = stk.top().second;
            char c = stk.top().first;

            while (count--)
            {
                res.insert(0, 1, c);
            }
            stk.pop();
        }

        return res;
    }
};