//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <math.h> //pow();
//using namespace std;
//
//int main() {
//	vector<int> v;
//	vector<int> sum;
//	int N = 55;
//	int chinese, math, english;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> chinese >> math >> english;
//		sum.push_back(chinese + math + english);
//	}
//	vector<int> v2(sum);
//	sort(v2.begin(), v2.end());
//	for (int i = v2.size() - 1; i >= v2.size() - 5; i--)
//	{
//		for (int j = 0; j < sum.size(); j++)
//		{
//			
//			if (sum[j] == v2[i]) {
//				if (v2[i] == v2[i - 1]) {
//					cout << j + 1 << " " << v2[i] << endl;
//				}
//				
//			}
//		}
//	}
//
//	return 0;
//}