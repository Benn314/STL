//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	int a1, a2,n;
//	cin >> a1 >> a2 >> n;
//	vector<int> v;
//	v.push_back(a1);
//	v.push_back(a2);
//	for (int i = 0; i < n; i++)
//	{
//		int back = v[i] * v[i+1];
//		if (back >= 10) {
//			v.push_back(back / 10);
//			v.push_back(back % 10);
//		}
//		else {
//			v.push_back(back);
//		}
//	}
//	int flag = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (flag) {
//			cout << " " << v[i];
//		}
//		else {
//			cout << v[i];
//			flag = 1;
//		}
//		
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << v[i];
//		if (i < n - 1) cout << " ";
//	}*/
//	return 0;
//}