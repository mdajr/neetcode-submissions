class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;

        int max = 0;

        while (right < prices.size()) {
            if (prices[right] < prices[left]) {
                left = right;
                right++;
                continue;
            }

            int total = prices[right] - prices[left];
            if (total > max) {
                max = total;
            }

            right++;
        }
        
        return max;
    }
};
