//#include <iostream>
//using namespace std;
//
//int main() {
//	
//	string s;
//	int arr[4]={0}; // G P L T
//	cin >> s;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == 'G' || s[i] == 'g') {
//			arr[0]++;
//		}
//		else if (s[i] == 'P' || s[i] == 'p') {
//			arr[1]++;
//		}
//		else if (s[i] == 'L' || s[i] == 'l') {
//			arr[2]++;
//		}
//		else if (s[i] == 'T' || s[i] == 't') {
//			arr[3]++;
//		}
//	}
//	while (arr[0] != 0 || arr[1] != 0 || arr[2] != 0 || arr[3] != 0) {
//		for (int j = 0; j < 4; j++)
//		{
//			if (j == 0 && arr[0]!=0) {
//				cout << "G";
//				arr[0]--;
//			}else if (j == 1 && arr[1] != 0) {
//				cout << "P";
//				arr[1]--;
//			}else if (j == 2 && arr[2] != 0) {
//				cout << "L";
//				arr[2]--;
//			}else if (j == 3 && arr[3] != 0) {
//				cout << "T";
//				arr[3]--;
//			}
//		}
//	}
//
//	return 0;
//}