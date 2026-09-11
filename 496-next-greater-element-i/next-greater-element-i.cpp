class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int i=0;
        int j=0;
        for(i=0;i<arr1.size();i++){
            int flag = 0;
            for(j=0;j<arr2.size();j++){
                if(arr1[i] == arr2[j]){
                    break;
                }
            }
            while( j < arr2.size()){
                if(arr1[i] < arr2[j]){
                    ans.push_back(arr2[j]);
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag == 0){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};