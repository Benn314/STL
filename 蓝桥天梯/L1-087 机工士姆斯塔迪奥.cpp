//#include <iostream>
//using namespace std;
//
//int a[200][200];
//
//int main() {
//	int N,M,Q;
//	//≥ı ºªØ
//	for (int i = 0; i < 200; i++)
//	{
//		for (int j = 0; j < 200; j++)
//		{
//			a[i][j] = 0;
//		}
//	}
//	cin >> N >> M >> Q;
//	int T, C;
//	for (int i = 0; i < Q; i++)
//	{
//		cin >> T >> C;
//		if (T == 0) {
//			for (int j = 0; j < M; j++)
//			{
//				a[C - 1][j] = 1;
//			}
//		}
//		else if (T == 1) {
//			for (int j = 0; j < N; j++)
//			{
//				a[j][C - 1] = 1;
//			}
//		}
//		
//	}
//	int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (a[i][j] == 0) {
//				count++;
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}