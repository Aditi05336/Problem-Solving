class Solution {
public:
  vector<vector<int>>res;
  void solve(vector<int>&a, int n ,int i , int sum , int t, vector<int>&curr){
    if( i==n && sum==t){
        res.push_back(curr);
        return ;
    }
    if(i>=n || sum>t){
        return ;
    }
    curr.push_back(a[i]);
    solve(a,n,i,sum+a[i],t,curr);
    curr.pop_back();
    solve(a,n,i+1,sum,t,curr);
  }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        int n = a.size();
        //int t;
        int i=0;
        int sum=0;
        vector<int>curr;
        solve(a,n,i,sum,t,curr);
        return res;
        
    }
};
