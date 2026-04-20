class Solution {
public:
    int climbStairs(int n) {

        int curr = 0;
        int last = 1;
        int lastm1 = 0;

        // Going down the stairs results in a fib sequence
        for (int i = n; i >0; i--) {
            curr = last + lastm1;
            lastm1 = last;
            last = curr;
        }

        return curr;

    }
};
