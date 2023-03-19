//// 学习一下 vector二维数组要这么定义和使用
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    string s;
//    cin >> n;
//    getchar();
//    getline(cin, s);
//    int col = (s.length() - 1) / n + 1;
//    vector<vector<char> > v(n, vector<char>(col, ' '));
//    int index = 0;
//    for (int j = col - 1; j >= 0; j--) {
//        for (int i = 0; i < n; i++) {
//            if (index < s.length())
//                v[i][j] = s[index++];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < col; j++)
//            cout << v[i][j];
//        cout << endl;
//    }
//    return 0;
//}
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////int main() {
////	/*
////		需要一个二维数组来存放
////	*/
////	int N; //每一列的字符数
////	string s;
////	string arr[100][100];
////	cin >> N;
////	cin.get();
////	getline(cin, s);
////
////	// 需要知道从第几列开始输出
////	int go = s.length() / N;
////	if (s.length() % N != 0) {
////		go++;
////	}
////	
////	int count = 0;
////	for (int i = go-1; i >= 0; i--)
////	{
////		for (int j = 0; j < N; j++)
////		{
////			//arr[j][i] = to_string(s[count++]); // 不能加用to_string
////			//cout << to_string(s[count++])<<" "; // 不能用to_string 需要回头重新看看概念
////			//cout << s[count++]<<" "; // 输出字符
////			
////			// s的长度小于等于go*N 所以 我们这里要判断count是否到了自己的临界值 大于的时候要跳出循环
////			if (count == s.length()) break;
////			arr[j][i] = s[count++];
////		}
////	}
////	// cout << endl << 'A'<<'b'; // 输出字符不是值大小
////
////	for (int i = 0; i < N; i++)
////	{
////		for (int j = 0; j < go; j++)
////		{
////			if (arr[i][j] != "") {
////				cout << arr[i][j];
////			}
////			else{
////				cout << " ";
////			}
////		}
////		if (i != N - 1) {
////			cout << endl;
////		}
////	}
////
////	return 0;
////}