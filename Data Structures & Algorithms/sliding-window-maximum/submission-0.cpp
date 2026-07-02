class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        int right=0;
        int left=0;
        vector<int>ans;
        vector<int>res;
        while(right<n){
            ans.push_back(a[right]);
            if(right-left+1==k){
                int max_ele = *max_element(ans.begin(),ans.end());
                res.push_back(max_ele);
                ans.erase(ans.begin());
                left++;
            }


            right++;

        }
        return res;
        
    }
};
