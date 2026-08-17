class Solution {
public:
    void soln(int index,vector<vector<int>>& ans,vector<int>& arr,int target,vector<int> temp,int sum){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target || index >= arr.size()){
            return;
        }
        sum+=arr[index];
        temp.push_back(arr[index]);
        soln(index,ans,arr,target,temp,sum);
        sum-=arr[index];
        temp.pop_back();
        soln(index+1,ans,arr,target,temp,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> temp;
        soln(index,ans,arr,target,temp,0);
        return ans;
    }
};