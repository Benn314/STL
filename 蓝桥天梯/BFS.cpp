#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// ����������ṹ��
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// ��������BFS����
vector<int> bfs(TreeNode* root) {
    vector<int> result;
    // ������д洢ÿһ��Ľڵ�
    queue<TreeNode*> q;
    q.push(root);

    // �����в�Ϊ��ʱ��˵�����нڵ���Ҫ����
    while (!q.empty()) {
        // ��ȡ��ǰ��Ľڵ�����
        int size = q.size();

        // ������ǰ������нڵ�
        for (int i = 0; i < size; i++) {
            // ��ȡ��ǰ��Ľڵ㣬������ֵ���뵽�����
            TreeNode* node = q.front();
            q.pop();
            result.push_back(node->val);

            // ����ǰ�ڵ���ӽڵ���������
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return result;
}

int main() {
    // ����������
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // BFS����������
    vector<int> result = bfs(root);

    // ������
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
