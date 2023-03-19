//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int N, S,o,sum1=0,sum2=0,count=1;
//	vector<int> v;
//	cin >> N >> S;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> o;
//		v.push_back(o);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		sum1 += v[i];
//		sum2 += v[N - 1 - i];
//		if (sum1 <= S && sum2 <= S) {
//			count = 2 * (i + 1);
//		}
//	}
//	if (count == 1) {
//		count = 0;
//	}
//	cout << count;
//
//	return 0;
//}