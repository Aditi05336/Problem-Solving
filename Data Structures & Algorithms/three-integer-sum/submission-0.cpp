class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            set<int>hash_st;
            for(int j=i+1;j<n;j++){
                int k = -(a[i]+a[j]);
                if(hash_st.find(k)!=hash_st.end()){
                    vector<int>temp= {a[i], a[j],k};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash_st.insert(a[j]);

            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;



        
    }
};
