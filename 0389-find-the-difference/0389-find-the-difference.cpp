class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> countChar(26, 0);

        for (int i = 0 ; i < s.length(); i++) {
            countChar[s[i] - 'a']++;
            countChar[t[i] - 'a']--;
        }
        countChar[t[s.length()] - 'a']--;

        for (int i = 0; i < 26; i++) {
            if (countChar[i] != 0) {
                return (i + 'a');
            }
        }

        return 0;
    }
};