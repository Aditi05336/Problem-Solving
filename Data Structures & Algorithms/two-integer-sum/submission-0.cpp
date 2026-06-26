class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n= a.size();
        map<int,int>mapp;
        for(int i=0;i<n;i++){
            int moreNeeded= t-a[i];
            if(mapp.find(moreNeeded)!=mapp.end()){
                return {mapp[moreNeeded],i};
            }
            mapp[a[i]]=i;
        }
        return {-1,-1};
        
    }
};
