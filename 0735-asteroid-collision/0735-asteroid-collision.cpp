class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (int i = asteroids.size() - 1; i >= 0; i--)
        {
            int cur = asteroids[i];

            if (cur < 0)
            {
                stk.push(cur);
            }
            else
            {
                while (!stk.empty() && (stk.top() < 0))
                {
                    int prev = stk.top();
                    stk.pop();
                    if (abs(cur) < abs(prev))
                    {
                        stk.push(prev);
                        cur = 0;
                        break;
                    }
                    else if (abs(cur) == abs(prev))
                    {
                        cur = 0;
                        break;
                    }
                }

                if (cur != 0)
                {
                    stk.push(cur);
                }
            }

        }

        vector<int>res;

        while (!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }

        return res;
    }
};