class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n,m;
        n= s1.length();
        m = s2.length();
        if(n>m){
            return false;
        }
        int right=0;
        int left=0;
        vector<int>mapp1(26,0);
        for(char c:s1){
            mapp1[c-'a']++;
        }
         vector<int>freq(26,0);
        while(right<m){
            freq[s2[right]-'a']++;
            if(right-left+1==n){
                    if(mapp1==freq){
                        return true;
                    }


                freq[s2[left]-'a']--;
                left++;
            }

            right++;


        }
        return false;
        
    }
};
