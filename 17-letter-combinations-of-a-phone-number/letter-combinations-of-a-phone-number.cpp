class Solution {
public:
    void solve(int index,vector<string>& ans,string &temp,string& digit){
        vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(index == digit.size()){
            ans.push_back(temp);
            return;
        }
        for(char ch : mp[digit[index] - '0']){
            temp+=ch;
            solve(index+1,ans,temp,digit);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string temp;
        solve(0,ans,temp,digits);
        return ans;
    }
};