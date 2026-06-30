class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int i=0;
        int j= n-1;
        int ans=0;
        while(i<j){
            int wd= j-i;
            int ht= min(h[i],h[j]);
            int curr = ht*wd;
            ans= max(ans,curr);

            if(ht==h[i]){
                i++;
            }
            else{
                j--;
            }

            
        }
        return ans;

        
    }
};
