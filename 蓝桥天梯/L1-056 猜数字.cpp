//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int main() {
//	int N, tar, nums = 0;
//	cin >> N;
//	string na;
//	vector<string> name;
//	vector<int> target;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> na>> tar;
//		name.push_back(na);
//		target.push_back(tar);
//		nums += tar;
//	}
//	int avg2 = nums / N / 2;
//	int min = 99999;
//	int tmp=0;
//	for (int i = 0; i < N; i++)
//	{
//		if (abs(target[i] - avg2) < min) {
//			min = abs(target[i] - avg2);
//			tmp = i;
//		}
//	}
//
//	cout << avg2 << " " << name[tmp];
//
//	return 0;
//}