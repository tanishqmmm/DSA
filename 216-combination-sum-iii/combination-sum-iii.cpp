class Solution {
public:
    void solve(int pre,vector<int>& temp,vector<vector<int>>& ans,int sum,int k,int n){
        if(temp.size() == k){
            if(sum == n){
                ans.push_back(temp);
            }
            return;
        }
        for(int i=pre+1; i < 10 ; i++){
            if(sum + i <= n){
                temp.push_back(i);
                sum+=i;
                solve(i,temp,ans,sum,k,n);
                sum-=i;
                temp.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0,temp,ans,0,k,n);
        return ans;
    }
};