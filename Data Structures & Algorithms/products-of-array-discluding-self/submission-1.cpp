class Solution {
public:
/*int prefix(int last, int start , vector<int>&a){
    int p= 1;
    for(int i=last; i>=start;i--){
        p = p*a[i];

    }
    return p;
}
int suffix(int start, int last , vector<int>&a){
    int p= 1;
    for(int i=start; i<=last;i++){
        p = p*a[i];

    }
    return p;
}
*/
    vector<int> productExceptSelf(vector<int>& a) {
        /*int n = a.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                int a3= suffix(i+1,n-1,a);
                ans[i]= a3;
            }
            else if(i==n-1){
                int a4= prefix(i-1,0,a);
                ans[i]= a4;
            }
            else{
                int a1=prefix(i-1,0,a);
                int a2= suffix(i+1,n-1,a);
                 int pro = a1*a2;
                ans[i]= pro;
            }


        }
        return ans;
        */
         int n = a.size();
        vector<int>ans(n,1);

        for(int i=1;i<n;i++){
            ans[i]= ans[i-1]*a[i-1];
        }
        int  suffix= 1;
        for(int i=n-2;i>=0;i--){
            suffix= suffix* a[i+1];
            ans[i]*=suffix;
        }
        return ans;

    }
};
