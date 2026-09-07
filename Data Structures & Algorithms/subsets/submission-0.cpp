class Solution {
public:
    vector<vector<int>>ans;

    void subset(vector<int>&a, int n , int i , vector<int>&curr){
        if(i==n){
          
            
                ans.push_back(curr);
            
            return ;
        }
        curr.push_back(a[i]);
        subset(a,n,i+1,curr);
        curr.pop_back();
        subset(a,n,i+1,curr);
    }


    vector<vector<int>> subsets(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++){
            cin>>a[i];
            a.push_back(a[i]);
        }
        vector<int>curr;
        subset(a,n,0,curr);
        return ans;
        
    }
};
