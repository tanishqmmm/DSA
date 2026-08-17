class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        int j=0;
        for(char ch : s){
            if(ch=='('){
                if(cnt>0){
                    s[j]=ch;
                    j++;
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0){
                    s[j]=ch;
                    j++;
                }
            }
        }
        s.resize(j);
        return s; 
    }
    
};