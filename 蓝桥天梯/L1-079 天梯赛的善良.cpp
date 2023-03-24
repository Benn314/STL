//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	vector<int> v;
//	int N;
//	cin >> N;
//	int power,count_back=1,count_front=1;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> power;
//		v.push_back(power);
//	}
//	sort(v.begin(), v.end());//右边是开区间，不是--v.end()，直接v.end()就行
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}*/
//	int back = v.size()-1,front=0;
//	while (1) {
//		if (v[front] == v[front + 1]) {
//			count_front++;
//			front++;
//		}
//		else {
//			cout << v[0] << " "<<count_front << endl;
//			break;
//		}
//	}
//
//	while (1) {
//		if (v[back] == v[back - 1]) {
//			count_back++;
//			back--;
//		}
//		else {
//			cout << v[v.size()-1] <<" "<< count_back;
//			break;
//		}
//	}
//	return 0;
//}