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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> answer;
        queue<TreeNode*> to_parse;

        if (root) {
            to_parse.push(root);
        }

        //int level = 0;
        while (to_parse.size()) {
            int current_queue_size = to_parse.size();
            // visit node,

            for (int i = 0; i < current_queue_size; i++) {
                TreeNode* current = to_parse.front();
                to_parse.pop();

                if (i == current_queue_size - 1) {
                    answer.push_back(current->val);
                }

                if (current->left) {
                    to_parse.push(current->left);
                }
                if (current->right) {
                    to_parse.push(current->right);
                }
            }

            //level += 1;
        }
        return answer;
    }
};
