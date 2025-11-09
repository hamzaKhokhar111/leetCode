class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});

        while(!q.empty()) {
            auto node = q.front(); q.pop();
            TreeNode* curr = node.first;
            int depth = node.second;

            // leaf node
            if(!curr->left && !curr->right)
                return depth;

            if(curr->left) q.push({curr->left, depth+1});
            if(curr->right) q.push({curr->right, depth+1});
        }
        return 0;
    }
};
