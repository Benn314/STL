//#include <iostream>
////#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//
////int jiecheng(string s) {
////	int sum=1;
////	for (int i = s.length(); i > 0; i--) {
////		sum *= i;
////	}
////
////	return sum;
////}
//
//int main()
//{
//	// 请在此输入您的代码
//	// test
//	/*set<char> str;
//	str.insert('a');
//	str.insert('b');
//	cout << str.size();*/
//	vector<string> str;
//	string s;
//	//set<char> setStr;
//	//vector<int> arr;
//	cin >> s;
//	int i = 0, j = 1;
//	while (true) {
//		/*string tempStr= s.substr(i, j);
//		for (int k = 0; k < tempStr.length(); k++)
//		{
//			setStr.insert(tempStr[k]);
//		}
//		arr.push_back(setStr.size());*/
//		str.push_back(s.substr(i, j));
//		if (i == s.length() - 1) {
//			break;
//		}
//		if (j == s.length()-i) {
//			i++;
//			j = 1;
//			continue;
//		}
//		j++;
//	}
//
//	//cout << s.substr(0, 1); // 第二个参数是数量n
//	//test
//	int count = 0;
//	//char arr[26] = { 0 };
//	for (vector<string>::iterator it = str.begin(); it != str.end(); it++)
//	{
//		char arr[26] = { 0 };
//		//cout << *it << " ";
//		string tempStr = *it;
//		for (int k = 0; k < tempStr.length(); k++)
//		{
//			if (arr[tempStr[k] - 'a'] > 1) {
//				continue;
//			}
//			arr[tempStr[k] - 'a']++;
//		}
//
//		for (int k1 = 0; k1 < 26; k1++)
//		{
//			if (arr[k1] == 1) {
//				count++;
//			}
//		}
//
//		// 初始化初值
//		/*for (int k2 = 0; k2 < 26; k2++)
//		{
//			arr[k2] = 0;
//		}*/
//		
//	}
//
//	cout << count;
//	/*int sum = 0;
//	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
//	{
//		sum += *it;
//	}
//
//	cout << sum;*/
//
//	return 0;
//}