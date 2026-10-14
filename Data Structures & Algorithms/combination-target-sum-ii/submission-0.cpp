class Solution {
public:
     vector<vector<int>>res;
     void solve(vector<int>&a, int n , int i , int sum , int t, vector<int>&curr){
        if(sum==t){
            res.push_back(curr);
            return;
        }
        if(i>=n || sum>t ){
            return ;
        }
        for(int j=i;j<n;j++){
            if(j>i && a[j]==a[j-1]){
                continue;
            }
            curr.push_back(a[j]);
            solve(a,n,j+1,sum+a[j],t,curr);
            curr.pop_back();
        }
     }

    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        int n = a.size();
        sort(a.begin(),a.end());
        int i=0;
        int sum=0;
        vector<int>curr;
        solve(a,n,i,sum,t,curr);
        return res;
        
    }
};
