//#include <iostream>
//using namespace std;
//
//int main() {
//	string s = "",s2 = "";
//	string a = "1112031584",b;
//	cin >> a;
//	cin >> b;
//	for (int i = 1; i < a.size(); i++) {
//		if (a[i] % 2 == a[i - 1] % 2) {
//			s += max(a[i], a[i - 1]);
//		}
//	}
//
//	for (int i = 1; i < b.size(); i++) {
//		if (b[i] % 2 == b[i - 1] % 2) {
//			s2 += max(b[i], b[i - 1]);
//		}
//	}
//
//	if (s == s2) {
//		cout << s;
//	}
//	else {
//		cout << s << endl << s2;
//	}
//	
//
//	return 0;
//}