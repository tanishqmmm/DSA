class Solution {
public:
    vector<int> preSmallerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(i);
        }

        return ans;
    }

    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[i] = st.top();
            }

            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        vector<int> nSE = nextSmallerElement(arr);
        vector<int> pSE = preSmallerElement(arr);

        int largest = 0;

        for (int i = 0; i < n; i++) {
            int width = nSE[i] - pSE[i] - 1;
            int area = arr[i] * width;

            largest = max(largest, area);
        }

        return largest;
    }
};