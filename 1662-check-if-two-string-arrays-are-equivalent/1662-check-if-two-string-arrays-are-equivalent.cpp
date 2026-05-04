class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string buffer1, buffer2;

        for (auto w1 : word1) {
            buffer1 += w1;
        }
        for (auto w2 : word2) {
            buffer2 += w2;
        }

        if (buffer1 == buffer2) {
            return true;
        }

        cout << buffer1 << " " << buffer2 << endl;

        return false;
    }
};