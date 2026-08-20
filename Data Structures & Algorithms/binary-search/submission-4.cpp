class Solution {
public:
    int search(vector<int>& a, int t) {
        int n = a.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid= left+(right-left)/2;
            if(a[mid]==t){
                return mid;
            }
            if(a[mid]<t){
                left=mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
        
    }
};
