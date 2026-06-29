class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i=0;
        int j= s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }

            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};

