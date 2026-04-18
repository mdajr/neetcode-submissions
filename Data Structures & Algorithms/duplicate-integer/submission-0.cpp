class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen_nums;

        for (auto num : nums) {
            if (seen_nums.find(num) != seen_nums.end()) {
                return true;
            }
            seen_nums.insert(num);
        }

        return false;
    }
};