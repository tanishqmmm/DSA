class Solution {
public:
//k
    int singleNumber(vector<int>& arr) {
        int xr=0;
        for(int i=0;i<arr.size();i++){
            xr=xr^arr[i];
        }
        return xr;
    }
};