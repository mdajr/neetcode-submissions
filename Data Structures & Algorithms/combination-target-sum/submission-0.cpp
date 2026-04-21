class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& _nums, int target) {
        nums = _nums;

        dfs(0, target);

        return result;
    }

    void dfs(int i, int target) {
        if (i == nums.size() || sum(subset) >= target) {
            if (sum(subset) == target) {
                result.push_back(subset);
            }
            return;
        }

        // left tree
        subset.push_back(nums[i]);
        dfs(i, target);


        // right tree
        subset.pop_back();
        dfs(i+1, target);

    }

    int sum(vector<int>& vec) {
        int result = 0;
        for (int num : vec) {
            result += num;
        }
        return result;
    }


    vector<int> nums;
    vector<int> subset;
    vector<vector<int>> result;

};
