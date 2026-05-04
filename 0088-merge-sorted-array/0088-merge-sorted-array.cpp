class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int max1 = m - 1;
        int max2 = n - 1;
        while ((max1 >= 0) && (max2 >= 0))
        {
            if(nums1[max1] <= nums2[max2])
            {
                nums1[max1 + max2+ 1] = nums2[max2];
                max2--;
            }
            else
            {
                nums1[max1 + max2 + 1] = nums1[max1];
                max1--;
            }
        }
        for (int i = max1; i >= 0; i--)
        {
            nums1[i + max2 + 1] = nums1[i];
        }
        for (int i = max2; i >= 0; i--)
        {
            nums1[max1 + i + 1] = nums2[i];
        }
    }
};