//#include <iostream>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	int T,arr[500]={0},begin=1,add=1;
//	for (int i = 0; i < 500; )
//	{
//		for (int j = 0; j < add; j++)
//		{
//			if (i + j >= 500) {
//				break;
//			}
//			arr[i+j] = j+1;
//		}
//		if (i + add >= 500) {
//			break;
//		}
//		i = add + i;
//		add++;
//		
//	}
//
//	//for (int i = 0; i < 1000; i++)
//	//{
//	//	cout << arr[i]<<endl;
//	//}
//
//	cin >> T;
//	int l, r;
//	for (int i = 0; i < T; i++)
//	{
//		int sum = 0;
//		cin >> l >> r;
//		for (int j = l; j <= r; j++)
//		{
//			sum += arr[j-1];
//		}
//		if (i == T - 1) {
//			cout << sum;
//			break;
//		}
//		cout << sum<<endl;
//
//	}
//	return 0;
//}