class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> charCount(26, 0);
        if (ransomNote.length() > magazine.length())
            return false;

        for (auto c : magazine) {
            charCount[c - 'a']++;
        }

        for (auto c : ransomNote) {
            if (charCount[c - 'a'] == 0) return false;
            charCount[c - 'a']--;
        }

        return true;
    }
};