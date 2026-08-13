class Solution {
public:

    bool valid(unordered_map<char,int>& window,
               unordered_map<char,int>& need)
    {
        for(auto it : need)
        {
            char ch = it.first;
            int required = it.second;

            if(window[ch] < required)
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {

        int n = s.length();

        string temp = "";
        string ans = "";

        unordered_map<char,int> mapp1;
        unordered_map<char,int> mapp2;

        for(char x : t)
            mapp2[x]++;

        int left = 0;
        int right = 0;

        while(right < n)
        {
            temp += s[right];
            mapp1[s[right]]++;

            while(valid(mapp1, mapp2))
            {
                if(ans.empty() || temp.length() < ans.length())
                    ans = temp;

                mapp1[s[left]]--;
                temp.erase(temp.begin());
                left++;
            }

            right++;
        }

        return ans;
    }
};