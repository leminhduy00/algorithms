class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int temp;
        if (num == 1) return true;
        for (int i = 1; i <= num; i++)
        {
            if ((num / i == i) && (num % i == 0))
            {
                return true;
            }
            else if ((num / i < i))
            {
                return false;
            }
        }
        return false;
    }
};