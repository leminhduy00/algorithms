class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> checkDuplicate;

        for (int i = 0; i < nums.size(); i++) {
            checkDuplicate.insert(nums[i]);
        }

        if (checkDuplicate.size() == nums.size()) {
            return false;
        }

        return true;
    }
};