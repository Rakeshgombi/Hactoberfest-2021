#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    stack<pair<int, int>> st;
    int n = heights.size();
    vector<int> right(n, n);
    vector<int> left(n, -1);
    for (int i = 0; i < n; i++) {
        int h = heights[i];
        while (!st.empty() && heights[st.top().second] > h) {
            right[st.top().second] = i;
            st.pop();
        }
        st.push({h, i});
    }
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; i--) {
        int h = heights[i];
        while (!st.empty() && heights[st.top().second] > h) {
            left[st.top().second] = i;
            st.pop();
        }
        st.push({h, i});
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, heights[i] * (right[i] - left[i] - 1));
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = largestRectangleArea(arr);
    cout << ans << endl;
    return 0;
}
