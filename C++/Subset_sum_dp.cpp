//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
    int dp[sum + 1][N + 1];
    
    for(int i = 0; i <= sum; i++)
        dp[i][0] = 0;
    
    for(int i = 0; i <= N; i++)
        dp[0][i] = 1;
    
    for(int i = 1; i <= sum; i++){
        for(int j = 1; j <= N; j++){
            if(arr[j - 1] > i)
                dp[i][j] = dp[i][j-1];
                
            else
                dp[i][j] = dp[i][j-1] || dp[i - arr[j - 1]][j - 1];
        }
    }
    
    return dp[sum][N];
}
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
