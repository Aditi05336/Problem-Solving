class Solution {
public:
vector<vector<int>>res;
void solve(vector<int>&a, int i , vector<int>&curr){
    res.push_back(curr);

    if(i>=a.size()){
        return ;
    }
    for(int j=i;j<a.size();j++){
        if(j>i && a[j]==a[j-1]){
            continue;
        }
        curr.push_back(a[j]);
        solve(a,j+1,curr);
        curr.pop_back();
    }
    

}
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        int i=0;
        vector<int>curr;
        solve(a,i,curr);
        return res;


        
    }
};
