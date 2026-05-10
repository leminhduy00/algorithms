class Solution {
public:
    static bool cmp(string &a, string &b)
    {
        return (a + b > b + a);
    }

    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for (int i = 0; i < nums.size(); i++)
        {
            str_nums.push_back(to_string(nums[i]));
        }

        sort(str_nums.begin(),str_nums.end(),cmp);

        string res;
        if (str_nums[0]== "0")
            return "0";

        for (int i = 0; i < str_nums.size(); i++)
        {
            res += str_nums[i];
        }

        return res;
    }
};