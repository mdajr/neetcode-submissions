class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t answer = 0;

        for (unsigned i=0; i<32; i++) {
            if (n & (1u << i)) {
                answer |= (1u << (31-i));
            }
        }

        return answer;
        
    }
};
