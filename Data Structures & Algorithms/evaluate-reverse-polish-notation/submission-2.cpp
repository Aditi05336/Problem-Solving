class Solution {
public:
    int evalRPN(vector<string>& a) {
        stack<int>st;
        int n = a.size();
        for(int i=0;i<n;i++){
            if(a[i]=="+" ){
                int n1= st.top();
                st.pop();
                int n2= st.top();
                st.pop();
                int res=n1+n2;
                st.push(res);
            }
            else if(a[i]=="-"){
                 int n1= st.top();
                 st.pop();
                int n2= st.top();
                st.pop();
                int res=n2-n1;
                st.push(res);

            }
            else if(a[i]=="*"){
                 int n1= st.top();
                 st.pop();
                int n2= st.top();
                st.pop();
                int res=n1*n2;
                st.push(res);

            }
            else if(a[i]=="/"){
                 int n1= st.top();
                 st.pop();
                int n2= st.top();
                st.pop();
                    int res=n2/n1;
                    st.push(res);
                

            }
            else{
                st.push(stoi(a[i]));
            }
        }
        return st.top();
        
    }
};
