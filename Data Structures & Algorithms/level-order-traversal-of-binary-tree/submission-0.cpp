/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<TreeNode*> to_visit;
        vector<vector<int>> answer;

        if (root) {
            to_visit.push_back(root);
        }

        int level = 0;
        while (to_visit.size()) {
            vector<int> level_set;
            vector<TreeNode*> next_to_visit;
            for (auto node : to_visit) {
                level_set.push_back(node->val);
                if (node->left) {
                    next_to_visit.push_back(node->left);
                }
                if (node->right) {
                    next_to_visit.push_back(node->right);
                }
            }
            answer.push_back(level_set);
            to_visit = next_to_visit;

            level+=1;
        }

        return answer;
    }


    
};
