class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++)
        {
            int check = arr[i];
            //cout << check << endl;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if ((arr[j] == check * 2) || (arr[j] * 2 == check))
                {
                    cout << check << " " << arr[j] << endl;
                    return true;
                }
            }
        }

        return false;
    }
};