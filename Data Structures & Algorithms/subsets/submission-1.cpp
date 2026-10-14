class Solution {
public:
    vector<vector<int>>res;

    void solve(vector<int>&a, int n , int i , vector<int>&curr){
        if(i==n){
            res.push_back(curr);
            return ;
        }
        curr.push_back(a[i]);
        solve(a,n,i+1,curr);
        curr.pop_back();
        solve(a,n,i+1,curr);
      
    }


    vector<vector<int>> subsets(vector<int>& a) {
        int n = a.size();
        vector<int>curr;
        int i=0;
        solve(a,n,i,curr);
        return res;
        
        
    }
};
