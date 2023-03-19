//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int main() {
//	/*
//		用一个数组来记录编号出现的次数 （然后用算法进行排序 输入最大值）
//		需要一个数组记录编号
//	*/
//	int arr[1001] = { 0 }; // 因为K值是1-1000 所以数组长度最少要到1001 才能获取到下标值为1000
//	int N, K, F;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> K;
//		for (int j = 0; j < K; j++)
//		{
//			cin >> F;
//			arr[F]++;
//		}
//	}
//
//	int max = 0;
//	int index_Max = 0;
//
//	for (int i = 0; i < 1001; i++)
//	{
//		if (arr[i] >= max) { //如果有并列，则输出编号最大的那个 所以这里要等于=
//			max = arr[i];
//			index_Max = i;
//		}
//	}
//
//	cout << index_Max << " " << max;
//
//	return 0;
//}
