class Solution {
public:
    void solve(int index, const vector<int>& arr,
               vector<int>& temp, set<vector<int>>& ans) {

        if(index == arr.size()) {
            vector<int> t = temp;
            sort(t.begin(), t.end());
            ans.insert(t);
            return;
        }

        // Take
        temp.push_back(arr[index]);
        solve(index + 1, arr, temp, ans);
        temp.pop_back();

        // Don't take
        solve(index + 1, arr, temp, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {

        set<vector<int>> ans;
        vector<int> temp;

        solve(0, arr, temp, ans);

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};