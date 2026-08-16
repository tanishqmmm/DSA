class Solution {
public:
//answer
    int maxSubArray(vector<int>& nums) {
        int maxs=INT_MIN;
        int i;
        int n=nums.size();
        int sum=0;
        for(i=0;i<n;i++){
            if(sum<0){
                sum=0;
            }
            sum+=nums[i];
            if(sum>maxs){
                maxs=sum;
            }
        }
        return maxs;
    }
};