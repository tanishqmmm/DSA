class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxi=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                maxi=max(maxi,count);
                count=0;
            }
            else{
                count ++;
            }
        }
        maxi=max(maxi,count);
        return maxi;
    }
};