class Solution {
public:
//kk
    bool check(vector<int>& nums) {
        int i;
        int n=nums.size();
        int k=0;
        for(i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                k++;
            }
        }
        return k <=1;
        
    }
};