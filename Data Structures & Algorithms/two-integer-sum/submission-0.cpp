class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            if (!seen.contains(needed)) {
                seen.insert(nums[i]);
                continue;
            }

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == needed) {
                    if (i < j) {
                        return {i, j};
                    } else {
                        return {j, i};
                    }
                }
            }
        }

        return {};
    }
};
