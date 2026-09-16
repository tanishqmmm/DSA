class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        string s = "";
        for (char ch : num) {

            while (!st.empty() && ch < st.top() && k > 0) {
                st.pop();
                k--;
            } 
            st.push(ch);
        }
        while(k>0) {
            st.pop();
            k--;
        }
        if(st.empty()){
            return "0";
        }
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }
        while (s.size() != 0 && s.back() == '0') {
            s.pop_back();
        }
        reverse(s.begin(), s.end());
        if (s.empty()) {
            return "0";
        }
        return s;
    }
};