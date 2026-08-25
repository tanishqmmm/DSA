class Solution {
public:
    void solve(int start,vector<int>& temp,vector<vector<int>>& ans,int k,int target){
        if(temp.size() == k){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        for(int i=start; i < 10 ; i++){
            if(i > target) break;
            temp.push_back(i);
            solve(i+1,temp,ans,k,target-i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(1,temp,ans,k,n);
        return ans;
    }
};