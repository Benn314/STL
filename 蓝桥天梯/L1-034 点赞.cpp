//#include <iostream>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//int main() {
//	/*
//		��һ����������¼��ų��ֵĴ��� ��Ȼ�����㷨�������� �������ֵ��
//		��Ҫһ�������¼���
//	*/
//	int arr[1001] = { 0 }; // ��ΪKֵ��1-1000 �������鳤������Ҫ��1001 ���ܻ�ȡ���±�ֵΪ1000
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
//		if (arr[i] >= max) { //����в��У��������������Ǹ� ��������Ҫ����=
//			max = arr[i];
//			index_Max = i;
//		}
//	}
//
//	cout << index_Max << " " << max;
//
//	return 0;
//}
