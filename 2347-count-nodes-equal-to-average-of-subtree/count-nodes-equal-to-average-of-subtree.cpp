// class Solution {
// public:

//     int sum(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         return root->val + sum(root->left) + sum(root->right);
//     }

//     int counter(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         return 1 + counter(root->left) + counter(root->right);
//     }

//     int averageOfSubtree(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         int Sum = sum(root);
//         int count = counter(root);

//         int ans = 0;

//         if (Sum / count == root->val) {
//             ans = 1;
//         }

//         ans += averageOfSubtree(root->left);
//         ans += averageOfSubtree(root->right);

//         return ans;
//     }
// };
class Solution {
public:
    int ans = 0;

    pair<int, int> dfs(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0};
        }

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;

        if (sum / count == root->val) {
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
