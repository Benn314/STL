//#include <iostream>
//using namespace std;
//
//int c[200][200];//���
//int a[200][200]; //����
//
//int main()
//{
//    // ���ڴ��������Ĵ���
//    int N;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= i; j++) {
//            cin >> a[i][j];
//        }
//    }
//    c[1][1] = a[1][1];
//
//    // ��ÿ��c[][]��ֱֵ�����һ��
//    for (int i = 2; i <= N; i++) {
//        for (int j = 1; j <= i; j++) {
//            c[i][j] = a[i][j] + max(c[i - 1][j - 1], c[i - 1][j]);
//        }
//    }
//    cout << max(c[N][(N + 1) / 2], c[N][(N + 2) / 2]);
//    return 0;
//}
//
//////��Ϊ�������Ծ���������ֵһ����ȡ���м�ģ���Ϊ��������������ֻ�����»������ң�
//////������ȡ��ǰ�漸�����ͺ��漸������ţ�ư���ģ����˼·̫ţ�ˣ����У�
////#include <iostream>
////using namespace std;
////int a[200][200], c[200][200], n;
////int main()
////{
////	cin >> n;
////	for (int i = 1; i <= n; i++)
////		for (int j = 1; j <= i; j++)
////			cin >> a[i][j];
////	c[1][1] = a[1][1];
////	for (int i = 2; i <= n; i++)
////		for (int j = 1; j <= i; j++)
////			c[i][j] = a[i][j] + max(c[i - 1][j], c[i - 1][j - 1]); // ��̬�滮��С�任 �������������
////	cout << max(c[n][(n + 1) / 2], c[n][(n + 2) / 2]); //����д��Ϊ���ܾ���ȡ���м�ֵ��NΪ������ż����״̬�������м�ֵ��ȡֵ
////	return 0;
////}
//
//// 10��ͨ��һ�����Ե�
////#include <iostream>
////#include <set>
////using namespace std;
////int main()
////{
////	// ���ڴ��������Ĵ���
////	int N,M,sum=0;
////	
////	cin >> N;
////	for (int i = 0; i < N; i++)
////	{
////		set<int> v;
////		int MAX = -1;
////		int temp = i + 1;
////		for (int j = 1; j <= temp; j++)
////		{
////			cin >> M;
////			v.insert(M);
////			MAX = max(MAX, *(--v.end()));
////		}
////		sum += MAX;
////	}
////	cout << sum;
////	return 0;
////}