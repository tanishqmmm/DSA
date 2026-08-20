class Solution {
public:
    bool rotateString(string s, string goal) {
        string c1=s+s;
        if(s.length() != goal.length()){
            return false;
        }
        if(c1.find(goal) == string::npos ){
            return false;
        }
        return true;
    }
};