class Solution {
public:
//answer
    int firstt(vector<int> &arr,int target){
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                high=mid-1;
                ans=mid;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int lastt(vector<int> &arr,int target){
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                low=mid+1;
                ans=mid;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        int first=firstt(arr,target);
        int last=lastt(arr,target);
        return {first,last};
    }
};