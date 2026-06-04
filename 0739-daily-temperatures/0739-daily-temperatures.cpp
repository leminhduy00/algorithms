class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> mystack;
        vector<int> myvec(temperatures.size());
        for(int i = 0; i < temperatures.size(); i++)
        {
            while (!mystack.empty() && temperatures[i] > mystack.top().first)
            {
                myvec[mystack.top().second] = i - mystack.top().second;
                mystack.pop();
            }
            
            mystack.push({temperatures[i], i});
        }
        return myvec;
    }
};