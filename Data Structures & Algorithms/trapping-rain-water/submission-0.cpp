class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>lmax(n,0);
        vector<int>rmax(n,0);
        lmax[0]=h[0];
        rmax[n-1]=h[n-1];
        for(int i=1;i<n;i++){
            lmax[i]= max(lmax[i-1], h[i]);
        }
        for(int j=n-2;j>=0;j--){
            rmax[j]= max(rmax[j+1], h[j]);
        }
       int sum=0;
       for(int i=0;i<n;i++){
        int ans = min(lmax[i],rmax[i])-h[i];
        sum+=ans;
       }

        return sum;
    }
};
