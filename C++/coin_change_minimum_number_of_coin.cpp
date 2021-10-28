#include<bits/stdc++.h>

using namespace std;

#define io          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll          long long
#define pb          push_back
#define input(a,n)  for(ll i=0;i<n;i++){ll y;cin>>y;a.pb(y);}
#define print(x)    for(auto it:x)cout<<it<<" ";cout<<"\n";
#define all(x)      (x).begin(),(x).end()
#define allr(x)     (x).rbegin(),(x).rend()
#define clr(x)      memset(x,0,sizeof(x))
#define fn(i,a,n)   for(ll i = a; i <= n; ++i)
#define f(i,n)      for(ll i = 0; i < n; i++)
#define endl        "\n"
#define test        ll t;cin>>t;while(t--)
#define INF         1000000000
#define MAX         100001
#define pyes        cout<<"YES"<<endl
#define pno         cout<<"NO"<<endl
#define sz(x)       (x).size()
#define fi          first
#define se          second
#define vlli        vector<ll>
#define vi          vector<int>
#define pi          pair<int,int>

const ll mod=1000000007;

int minCoins(vector<int> &coin, int sum) 
{
    int n=sz(coin);
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0; 
    }
    for(int j=1;j<=sum;j++){
        dp[0][j]=INT_MAX-1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(coin[i-1]<=j){
                dp[i][j]=min(1+dp[i][j-coin[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]==INT_MAX-1)
        return -1;
    return dp[n][sum];
} 

int main(){
    int n;
    cin>>n;
    vector<int> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    int sum;
    cin>>sum;
    cout<<minCoins(coin,sum);
    return 0;
}