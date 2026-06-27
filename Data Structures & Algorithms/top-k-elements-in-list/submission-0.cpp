class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        int n = a.size();
        map<int,int>mapp;
        for(int x:a){
            mapp[x]++;
        }
        vector<int>res;
        while(k--){
        int maxFreq=0;
        int maxEle=0;
            for(auto it:mapp){
                if(it.second>maxFreq){
                     maxFreq=it.second;
                    maxEle=it.first;
            }
            }
                res.push_back({maxEle});
                mapp[maxEle]=0;
        
        }
        
        return res;
        
    }
};
