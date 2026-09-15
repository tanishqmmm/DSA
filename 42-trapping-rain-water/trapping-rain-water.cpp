class Solution {
public:
    vector<int> suffix(vector<int> &arr){
        vector<int> suf(arr.size());
        int n=arr.size();
        suf[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            suf[i]=max(suf[i-1],arr[i]);
        }
        return suf;
    }
    vector<int> prefix(vector<int> &arr){
        vector<int> pre(arr.size());
        int n=arr.size();
        pre[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            pre[i]=max(arr[i],pre[i+1]);
        }
        return pre;
    }
    int trap(vector<int>& height) {
        int total = 0;
        vector<int> suff=suffix(height);
        vector<int> pre=prefix(height);
        int n=height.size();
        for(int i=0 ; i<n ; i++){
            if(height[i] < suff[i] && height[i] < pre[i]){
                total+= min(suff[i],pre[i]) - height[i];
            }
        }
        return total;
    }
};