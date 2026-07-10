class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        map<int,int>mapp;
        for(int x:a){
            mapp[x]++;
        }
        for(auto it:mapp){
            if(it.second>1){
                return it.first;
            }
        }
        return 0;
        
    }
};
