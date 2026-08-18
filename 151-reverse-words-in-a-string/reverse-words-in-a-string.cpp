class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i] != ' '){
                word+=s[i];
            }
            else if(!word.empty()){
                st.push_back(word);
                word="";
            }
        }
        if(!word.empty()){
            st.push_back(word);
        }
        reverse(st.begin(),st.end());
        string result;
        for(int i=0;i<st.size();i++){
            result+=st[i];
            if(i<st.size()-1){
                result+=" ";
            }
        }
        return result;
    }
};