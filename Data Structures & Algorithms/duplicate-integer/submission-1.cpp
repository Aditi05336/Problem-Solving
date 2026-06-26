class Solution {
public:
    bool hasDuplicate(vector<int>& a) {
        int n= a.size();
        unordered_map<int,int>mapp;
        for(int x:a){
            mapp[x]++;
        }
        for(auto it:mapp){
            int freq=  it.second;
            if(it.second>1){
                return true;
            }
        }
        return false;

        
    }
};