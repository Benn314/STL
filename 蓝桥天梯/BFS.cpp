#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 定义二叉树结构体
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// 二叉树的BFS遍历
vector<int> bfs(TreeNode* root) {
    vector<int> result;
    // 定义队列存储每一层的节点
    queue<TreeNode*> q;
    q.push(root);

    // 当队列不为空时，说明还有节点需要遍历
    while (!q.empty()) {
        // 获取当前层的节点数量
        int size = q.size();

        // 遍历当前层的所有节点
        for (int i = 0; i < size; i++) {
            // 获取当前层的节点，并将其值加入到结果中
            TreeNode* node = q.front();
            q.pop();
            result.push_back(node->val);

            // 将当前节点的子节点加入队列中
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return result;
}

int main() {
    // 构建二叉树
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // BFS遍历二叉树
    vector<int> result = bfs(root);

    // 输出结果
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
