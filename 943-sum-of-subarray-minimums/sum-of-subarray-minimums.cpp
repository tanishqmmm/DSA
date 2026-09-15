class Solution {
public:
    vector<int> findpsee(vector<int>& arr) {
        int n = arr.size();
        vector<int> psee(n);
        stack<int> st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            psee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return psee;
    }

    vector<int> findnse(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;

        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return nse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        long long sum = 0;
        int n = arr.size();
        long long mod = 1e9 + 7;

        vector<int> psee = findpsee(arr);
        vector<int> nse = findnse(arr);

        for(int i = 0; i < n; i++) {
            long long left = i - psee[i];
            long long right = nse[i] - i;

            long long contribution = (left * right % mod * arr[i]) % mod;

            sum = (sum + contribution) % mod;
        }

        return sum;
    }
};