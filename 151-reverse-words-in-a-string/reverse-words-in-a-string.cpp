class Solution {
public:
    string reverseWords(string s) {
        string result = "";

        int n = s.length();
        int space = n - 1;
        int end = n - 1;

        while (space >= 0) {

            if (s[space] == ' ') {

                if (space < end) {
                    if(!result.empty()){
                        result += ' ';
                    }
                    result += s.substr(space + 1, end - space);
                }

                end = space - 1;
            }

            space--;
        }
        if (end >= 0) {
            if(!result.empty()){
                result+=" ";
            }
            result += s.substr(0, end + 1);
        }

        return result;
    }
};