class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
     //   int maxp=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int maxp = p[i];
             for(int j=i+1;j<n;j++){
                maxp = max(maxp, p[j]);
             }
             int profit = maxp-p[i];
             ans= max(ans, profit);
        }
        return ans;

        
    }
};
