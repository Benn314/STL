//#include <iostream>
//#include <vector>
//using namespace std;
//
//// ����������ṹ��
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//// ��������DFS����
//void dfs(TreeNode* root, vector<int>& result) {
//    // ���ڵ�Ϊ��ʱ�����ݹ�
//    if (!root) return;
//
//    // ����ǰ�ڵ��ֵ���뵽�����
//    result.push_back(root->val);
//
//    // �ݹ����������
//    dfs(root->left, result);
//
//    // �ݹ����������
//    dfs(root->right, result);
//}
//
//int main() {
//    // ����������
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(5);
//
//    // ����洢���������
//    vector<int> result;
//
//    // DFS����������
//    dfs(root, result);
//
//    // ������
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i] << " ";
//    }
//
//    return 0;
//}
