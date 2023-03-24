//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    int num = (int)pow(2, n) - 1; //问题结点的树是一颗满二叉树(也是完全二叉树) 总结点数为2^n - 1
//    char ch = '\0';
//    for (int i = 0; i < m; i++) {
//        int k = 1; //初始值1 即为根节点开始
//        for (int j = 0; j < n; j++) {
//            cin >> ch;
//            if (ch == 'y') {
//                k = 2 * k; //当输入y时 则遍历到左孩子结点(2*k)
//            }
//            else {
//                k = 2 * k + 1; //当输入n时 则遍历到右孩子结点(2*k + 1)
//            }
//        }
//        //当输入结束后 也就遍历到了最后一层结点(即结论的结点)
//        cout << k - num << endl; //最后一层的任意孩子编号k - 问题结点树的总结点数num = 结论编号
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	int num = pow(2, n) - 1;
//	char ch = '\0';
//	for (int i = 0; i < m; i++)
//	{
//		int k = 1;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> ch;
//			if (ch == 'y') {
//				k = 2 * k;
//			}
//			else {
//				k = 2 * k + 1;
//			}
//		}
//		cout << k - num << endl;
//	}
//	return 0;
//}