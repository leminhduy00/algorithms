class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = -10e4;
        vector<int> prefixSum(nums.size(), 0);
        prefixSum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (i < k)
            {
                prefixSum[i] = prefixSum[i-1] + nums[i];
            }
            else
            {
                prefixSum[i] = prefixSum[i-1] + nums[i] - nums[i - k];
            }
        }

        if (k == nums.size()) {
            maxAverage  = (double) prefixSum[k-1] / k;
        }
        else
        {
            for (int i = k - 1; i < nums.size(); i++)
            {
                maxAverage = max(((double) prefixSum[i] / k) , maxAverage);
                cout << prefixSum[i] << " " << maxAverage << endl;
            }
        }

        return maxAverage;
    }
};