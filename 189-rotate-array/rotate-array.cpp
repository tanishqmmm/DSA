class Solution {
public:
//k
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int mid=n-k;
        reverse(nums.begin(),nums.begin()+mid);
        reverse(nums.begin()+mid,nums.end());
        reverse(nums.begin(),nums.end());
    }
};