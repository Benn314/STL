//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    int num = (int)pow(2, n) - 1; //�����������һ����������(Ҳ����ȫ������) �ܽ����Ϊ2^n - 1
//    char ch = '\0';
//    for (int i = 0; i < m; i++) {
//        int k = 1; //��ʼֵ1 ��Ϊ���ڵ㿪ʼ
//        for (int j = 0; j < n; j++) {
//            cin >> ch;
//            if (ch == 'y') {
//                k = 2 * k; //������yʱ ����������ӽ��(2*k)
//            }
//            else {
//                k = 2 * k + 1; //������nʱ ��������Һ��ӽ��(2*k + 1)
//            }
//        }
//        //����������� Ҳ�ͱ����������һ����(�����۵Ľ��)
//        cout << k - num << endl; //���һ������⺢�ӱ��k - �����������ܽ����num = ���۱��
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