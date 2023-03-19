//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	/*
//		输入数组
//		数组长度比输入值小，则后往前截取 否则从头开始进行填充
//	*/
//	int N;
//	string c;
//	cin >> N;
//	cin >> c;
//	//cin.get(); // 用 getchar();也行
//	//getchar(); //如果是char c的话
//	string s;
//	getline(cin, s);
//
//	if (N <= s.length()) {
//		//cout<<s.substr(s.length() - N, s.length()); // 右边是开区间 所以直接到s.length()
//		cout << s.substr(s.length() - N); //碰巧成功 以为substr的两个参数是begin和end 其实是pos和n 然后n的话不写默认是到最后一个位置
//	}
//	else {
//		for (int i = 0; i < N-s.length(); i++)
//		{
//			cout << c;
//		}
//		cout << s;
//	}
//
//
//	return 0;
//}