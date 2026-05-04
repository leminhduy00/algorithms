class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> direction(2, 0);

        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'U') {
                direction[0]++;
            }
            else if (moves[i] == 'D') {
                direction[0]--;
            }
            else if (moves[i] == 'L') {
                direction[1]++;
            }
            else if (moves[i] == 'R') {
                direction[1]--;
            }
        }

        if ((direction[0] == 0) && (direction[1] == 0)) {
            return true;
        }
        return false;
    }
};