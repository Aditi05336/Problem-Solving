class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         int ans = 0;

        for(int i = 0; i < 32; i++) {
            ans = ans << 1;        // make space for next bit
            ans = ans | (n & 1);   // take last bit of n
            n = n >> 1;            // remove last bit from n
        }

        return ans;
        
    }
};
