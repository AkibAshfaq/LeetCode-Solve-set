class Solution {
public:
    vector<TreeNode*> build(int start, int end) {
        if (start > end)
            return {NULL}; // nullptr causes 2 ms lag so used NULL
        vector<TreeNode*> trees;
        for (int i = start; i <= end; i++) {
            vector<TreeNode*> leftTrees = build(start, i - 1);
            vector<TreeNode*> rightTrees = build(i + 1, end);
            for (TreeNode* left : leftTrees) {
                for (TreeNode* right : rightTrees) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    trees.push_back(root);
                }
            }
        }
        return trees;
    }

    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return build(1, n);
    }
};
