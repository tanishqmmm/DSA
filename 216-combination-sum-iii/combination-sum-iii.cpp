class Solution {
public:
    void solve(int index, int k, int target, vector<int>& temp,
               vector<vector<int>>& ans) {

        if (k == 0) {
            if (target == 0)
                ans.push_back(temp);
            return;
        }

        if (index > 9 || target <= 0)
            return;

        // Take
        temp.push_back(index);
        solve(index + 1, k - 1, target - index, temp, ans);
        temp.pop_back();

        // Don't take
        solve(index + 1, k, target, temp, ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1, k, n, temp, ans);

        return ans;
    }
};