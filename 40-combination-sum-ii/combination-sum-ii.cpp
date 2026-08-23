class Solution {
public:
    void findres(int index, vector<int>& arr, vector<int>& temp,
                 int target, vector<vector<int>>& ans) {

        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < arr.size(); i++) {

            if(i > index && arr[i] == arr[i-1])
                continue;

            if(arr[i] > target)
                break;

            temp.push_back(arr[i]);

            findres(i + 1, arr, temp, target - arr[i], ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        findres(0, candidates, temp, target, ans);

        return ans;
    }
};