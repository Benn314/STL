//#include <iostream>
//using namespace std;
//
//int c[200][200];//求和
//int a[200][200]; //单个
//
//int main()
//{
//    // 请在此输入您的代码
//    int N;
//    cin >> N;
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= i; j++) {
//            cin >> a[i][j];
//        }
//    }
//    c[1][1] = a[1][1];
//
//    // 给每个c[][]赋值直到最后一个
//    for (int i = 2; i <= N; i++) {
//        for (int j = 1; j <= i; j++) {
//            c[i][j] = a[i][j] + max(c[i - 1][j - 1], c[i - 1][j]);
//        }
//    }
//    cout << max(c[N][(N + 1) / 2], c[N][(N + 2) / 2]);
//    return 0;
//}
//
//////因为他的特性决定它最后的值一定是取在中间的，因为所有数在数组里只能向下或者向右，
//////不可能取到前面几个数和后面几个数，牛逼啊真的，这个思路太牛了，大佬！
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
////			c[i][j] = a[i][j] + max(c[i - 1][j], c[i - 1][j - 1]); // 动态规划的小变换 看看就能理解了
////	cout << max(c[n][(n + 1) / 2], c[n][(n + 2) / 2]); //这样写是为了能绝对取到中间值，N为奇数和偶数的状态都满足中间值的取值
////	return 0;
////}
//
//// 10个通过一个测试点
////#include <iostream>
////#include <set>
////using namespace std;
////int main()
////{
////	// 请在此输入您的代码
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