class Solution {
public:
    int reverse(int x) {
        int temp;
        long long n = 0;
        while (x != 0) {
            int temp = x % 10;
            n = n * 10 + temp;
            x = x / 10;
        }
        if(n > INT_MAX || n < INT_MIN){
            return 0;
        }
        return (int)n;
    }
};