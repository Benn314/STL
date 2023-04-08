//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 定义二叉树结构体
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//// 二叉树的DFS遍历
//void dfs(TreeNode* root, vector<int>& result) {
//    // 当节点为空时结束递归
//    if (!root) return;
//
//    // 将当前节点的值加入到结果中
//    result.push_back(root->val);
//
//    // 递归遍历左子树
//    dfs(root->left, result);
//
//    // 递归遍历右子树
//    dfs(root->right, result);
//}
//
//int main() {
//    // 构建二叉树
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(5);
//
//    // 定义存储结果的向量
//    vector<int> result;
//
//    // DFS遍历二叉树
//    dfs(root, result);
//
//    // 输出结果
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << " ";
//    }
//
//    return 0;
//}
