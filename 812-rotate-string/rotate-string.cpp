class Solution {
public:
    bool rotateString(string s, string goal) {
        int t=s.size();
        int rotation=0;
        int n=t-1;
        if(s.size() != goal.size()){
            return false;
        }
        while(t--){
            string temp="";
            rotation++;
            temp += s.substr(rotation,n);
            temp += s.substr(0,rotation);
            if(goal.find(temp) !=  string::npos){
                return true;
            }
        }
        return false;
    }
};