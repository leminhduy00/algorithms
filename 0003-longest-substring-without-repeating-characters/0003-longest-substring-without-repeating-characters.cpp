class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        bitset<256> check;
        for (int i = 0; i < s.length(); i++) {
            check.reset();
            for (int j = i; j < s.length(); j++) {
                if (check[int(s[j])] == 0) {
                    check[int(s[j])] = 1;
                    max = (max > check.count()) ? max : check.count();
                }
                else 
                    break;
            }
        }
        return max;
    }
};