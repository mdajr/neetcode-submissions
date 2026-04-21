class Solution {
public:
    vector<vector<int>> subsets(vector<int>& _nums) {
        nums = _nums;

        dfs(0);

        return result;
    }

    void dfs(int i) {
        if (i == nums.size()) {
            result.push_back(subset);
            return;
        }

        // include the num
        subset.push_back(nums[i]);
        dfs(i+1);

        // don't include the numb
        subset.pop_back();
        dfs(i+1);
    }

    vector<int> nums;
    vector<vector<int>> result;
    vector<int> subset;

};
