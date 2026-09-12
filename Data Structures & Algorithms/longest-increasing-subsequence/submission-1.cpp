class Solution {
public:
    int solve(vector<int>&a, int n, int i, int prev,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int skip = solve(a,n,i+1, prev,dp);
        int take=0;
        if(prev==-1 || a[i]>a[prev]){

             take = 1+solve(a,n,i+1, i,dp);
        }

        return  dp[i][prev+1]=max(skip,take);
    }
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

        return solve(a,n,0,-1,dp);

        
    }
};
