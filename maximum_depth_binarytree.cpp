#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildtree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;

    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        int leftval, rightval;
        cin >> leftval >> rightval;

        if (leftval != -1) {
            node->left = new TreeNode(leftval); 
            q.push(node->left);
        }
        if (rightval != -1) {
            node->right = new TreeNode(rightval); 
            q.push(node->right);
        }
    }
    return root;
}

int maxdepth(TreeNode* root) {
    if (root == NULL) return 0;
    int lh = maxdepth(root->left);
    int rh = maxdepth(root->right);
    return max(lh, rh) + 1;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        TreeNode* root = buildtree();
        cout << maxdepth(root) << endl;
    }
}
