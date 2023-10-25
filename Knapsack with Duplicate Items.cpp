//Driver Code Stars
#include<bits/stdc++.h>
using namespace std;
//Driver Code ENds

// User function Template for C++

class Solution{
public:
    int dp[1005][1005];
    Solution(){memset(dp,-1,sizeof(dp));}
    int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        if(n<=0 || w==0) return 0;
        if(dp[n][w]!=-1) return dp[n][w];
        int take=0;
        if(w-wt[n-1]>=0) take =knapSack(n,w-wt[n-1],val,wt)+val[n-1];
        int notake=knapSack(n-1,w,val,wt);
        return dp[n][w]=max(notake,take);
    }
};
//Driver Code Starts
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i=0;i<N;i++)
            cin>>val[i];
        for(int i=0;i<N;i++)
            cin>>wt[i];
        Solution ob;
        cout<<ob.knapSack(N,,W,val,wt)<<endl;
    }
    return 0;
}
//Driver Code Ends