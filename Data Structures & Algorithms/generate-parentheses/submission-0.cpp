class Solution {
public:
vector<string>res;
void solve(int n , int open , int close , string&temp){
    if(temp.length()==2*n){
        res.push_back(temp);
        return ;
    }
    if(open<n){
        temp.push_back('(');
        solve(n,open+1,close,temp);
        temp.pop_back();
    }
    if(close<open){
        temp.push_back(')');
        solve(n,open,close+1,temp);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        int open =0;
        int close=0;

        string temp="";
        solve(n,open,close,temp);
        return res;
        
    }
};
