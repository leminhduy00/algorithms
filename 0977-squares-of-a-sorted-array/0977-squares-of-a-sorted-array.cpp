class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int mid = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i]) < abs(nums[mid]))
            {
                mid = i;
            }
        }
        res.push_back(squareNums(nums[mid]));
        int l = mid - 1, r = mid + 1;
        while ((l >= 0) || (r < nums.size()))
        {
            if ((l >= 0) && (r < nums.size()))
            {
                if (abs(nums[l]) < abs(nums[r]))
                {
                    res.push_back(squareNums(nums[l--]));
                }
                else
                {
                    res.push_back(squareNums(nums[r++]));
                }
            }
            else if (l >= 0)
            {
                res.push_back(squareNums(nums[l--]));
            }
            else if (r < nums.size())
            {
                res.push_back(squareNums(nums[r++]));
            }
        }

        return res;
    }

private:
    int squareNums(int a)
    {
        return abs(a) * abs(a);
    }
};