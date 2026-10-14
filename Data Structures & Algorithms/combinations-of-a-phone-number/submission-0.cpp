class Solution {
public:
 vector<string>res;
 void solve(string&d, int idx, string&temp, unordered_map<char,string>&mapp){
    if(idx==d.length()){
        res.push_back(temp);
        return ;
    }
    if(idx>d.length()){
        return ;
    }
    char ch= d[idx];
    string str= mapp[ch];
    for(int j=0;j<str.length();j++){
        temp.push_back(str[j]);
        solve(d,idx+1,temp,mapp);
        temp.pop_back();

    }


 }
    vector<string> letterCombinations(string d) {
        unordered_map<char,string>mapp;
        if(d.length()==0){
            return {};
        }
        mapp['2']="abc";
        mapp['3']="def";
        mapp['4']="ghi";
        mapp['5']="jkl";
        mapp['6']="mno";
        mapp['7']="pqrs";
        mapp['8']="tuv";
        mapp['9']="wxyz";

        string temp="";

        int idx=0;
        solve(d,idx,temp,mapp);
        return res;
        
    }
};
