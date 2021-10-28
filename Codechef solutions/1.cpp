// You are given a positive integer N. You have to print exactly N+1 positive integers satisfying the following conditions:

// Exactly one value should appear twice, all the remaining values should appear only once.
// Sum of all these values should be equal to 2N.
// You have to print the values in non-decreasing order. If there are multiple solutions, you can print any of them.

// Input Format
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains a single integer N.
// Output Format
// For each test case, print a single line containing N+1 positive integers in non-decreasing order that satisfy the given conditions.
// If there are multiple solutions, you may print any of them.

#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastio();
    unsigned long long int t;
    cin >> t;
    while (t-- != 0)
    {
        int n;
        cin >> n;
        unsigned long long int power, flag = 1;
        power = pow(2, n);
        cout << "1 ";
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
            flag = flag + i;
        }
        cout << power - flag << endl;
    }
    return 0;
}
