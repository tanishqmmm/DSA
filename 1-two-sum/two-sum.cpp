
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int> mpp;
        vector<int> temp;
        int i;
        int n = arr.size();
        for (i = 0; i < n; i++) {
            int rem = target - arr[i];
            if (mpp.find(rem) != mpp.end()) {
                temp={mpp[rem], i};
            }
            mpp[arr[i]] = i;
        }
        return temp;
    }
};