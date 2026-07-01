class Solution {
public:
    int mySqrt(int x) {
        long long l = 0, r = x;
        long long mid = (l + r) / 2;

        if (x == 1) return 1;
        while (l < r)
        {
            mid = (l + r) / 2;
            
            if (mid * mid == x)
            {
                break;
            }
            else if (mid * mid > x)
            {
                if (r == mid + 1)
                {
                    break;
                }
                r = mid + 1;
            }
            else
            {
                if (l == mid - 1)
                {
                    break;
                }
                l = mid - 1;
            }
            cout << mid << " " << l << " " << r << endl;
            
        }

        return mid;
    }
};