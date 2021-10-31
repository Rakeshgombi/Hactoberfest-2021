#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(int a[], int n) {
    int current_sum = a[0];
    int overall_sum = a[0];
    for (int i = 1; i < n; ++i) {
        if (current_sum >= 0) {
            current_sum += a[i];
        } else {
            current_sum = a[i];
        }
        overall_sum = max(overall_sum, current_sum);
    }
    return overall_sum;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << maxSumSubarray(a, n);
    return 0;
}