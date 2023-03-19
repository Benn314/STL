//// 第一次尝试
//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//	int N, K, M;
//	string ID;
//	set<string> s, ans;
//	int flag = 1;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> K;
//		if (K >= 2) {
//			for (int j = 0; j < K; j++)
//			{
//				cin >> ID;
//				s.insert(ID);
//			}
//		}
//		else {
//			cin >> ID;
//		}
//	}
//	cin >> M;
//	for (int k = 0; k < M; k++)
//	{
//		cin >> ID;
//		if (s.find(ID) == s.end() && ans.find(ID) == ans.end()) { // 查找不到的话 就是没朋友！
//			ans.insert(ID);
//			if (flag == 0) {
//				cout << " ";
//			}
//			cout << ID;
//			flag = 0;
//		}
//	}
//	if (flag) {
//		cout << "No one is handsome";
//	}
//	return 0;
//}
//
////#include <iostream>
////#include <set>
////using namespace std;
////int main() {
////    int a, b, c;
////    cin >> a;
////    set<string> s, ans;
////    string str;
////    for (int i = 0; i < a; i++) {
////        cin >> b;
////        if (b >= 2) {
////            for (int j = 0; j < b; j++) {
////                cin >> str;
////                s.insert(str);
////            }
////        }
////        else {
////            cin >> str; // 因为只有一个人 所以cin一次就够了
////        }
////    }
////    cin >> c;
////    int flag = 0;
////    for (int i = 0; i < c; i++) {
////        cin >> str;
////        if (s.find(str) == s.end() && ans.find(str) == ans.end()) {
////            ans.insert(str);
////            if (flag == 1)
////                cout << " ";
////            cout << str;
////            flag = 1;
////        }
////    }
////    if (flag == 0)
////        cout << "No one is handsome";
////    return 0;
////}
////
////
//////#include <iostream>
//////#include <string>
//////using namespace std;
//////
//////int main() {
//////	int N; // 已知朋友圈的个数
//////	cin >> N;
//////	int K[100]; // 朋友圈中的人数
//////	string ID[100][100];
//////	string temp[100];
//////	int flag3 = 1;
//////	
//////	for (int i = 0; i < N; i++)
//////	{
//////		cin >> K[i];
//////		for (int j = 0; j < K[i]; j++) {
//////			cin >> ID[i][j];
//////		}
//////	}
//////	string findID[100];
//////	int M;
//////	cin >> M;
//////	for (int k = 0; k < M; k++) {
//////		cin >> findID[k];
//////	}
//////
//////	// ---
//////
//////	for (int i2 = 0; i2 < M; i2++) {
//////		int flag = 1;
//////		for (int j2 = 0; j2 < N; j2++) {
//////			for (int k2 = 0; k2 < K[j2]; k2++)
//////			{
//////				if (findID[i2] == ID[j2][k2]) {
//////					//cout << findID[i2] << " ";
//////					flag = 0;
//////				}
//////			}
//////		}
//////		if (flag == 1) {
//////			//cout << findID[i2]<<" ";
//////			for (int i4 = 0; i4 < M; i4++) {
//////				if (temp[i4] == findID[i2]) {
//////					//temp[i2] = findID[i2];
//////					flag3 = 0;
//////				}
//////			}
//////			if (flag3 == 1) {
//////				temp[i2] = findID[i2];
//////			}
//////		}
//////	}
//////	int flag2 = 1;
//////	//string temp2[100];
//////	for (int i3 = 0; i3 < M-1; i3++) {
//////		if (temp[i3] != "") {
//////			cout << temp[i3] << " ";
//////			flag2 = 0;
//////		}
//////	}
//////	cout << temp[M - 1];
//////	if (flag2 == 1) {
//////		cout << "No one is handsome";
//////	}
//////
//////	return 0;
//////}