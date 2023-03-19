//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	string s;
//	int arr[10] ={0};
//	vector<int> v;
//	cin >> s;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		arr[s[i]-'0']++; // 因为是char型 下标是int型 所以需要进行char转int -'0'
//	}
//
//	for (int j = 9; j >= 0; j--)
//	{
//		if (arr[j] != 0) {
//			v.push_back(j);
//		}
//	}
//
//	vector<int> v2;
//	for (int i1 = 0; i1 < s.length(); i1++)
//	{
//		for (int j1 = 0; j1 < v.size(); j1++)
//		{
//			if ((s[i1]-'0') == v[j1]) { // 单字符需要转成int！再进行比对
//				v2.push_back(j1); // 用普通数组arr[11]也可以 只能说vector比较智能
//			}
//		}
//	}
//
//	cout << "int[] arr = new int[]{" << v[0];
//	for (int i2 = 1; i2 < v.size(); i2++)
//	{
//		cout << "," << v[i2];
//	}
//	cout << "};" << endl;
//
//	cout << "int[] index = new int[]{" << v2[0];
//	for (int j2 = 1; j2 < v2.size(); j2++)
//	{
//		cout << "," << v2[j2];
//	}
//	cout << "};"<<endl;
//
//	return 0;
//}
//
//
//
////#include <iostream>
////#include <vector>
////using namespace std;
////
////int main() {
////    string s; // 手机号码
////    cin >> s;
////    int a[10] = { 0 }; // 因为手机号码数字只有 0-9 所以数组长度定义10个就行
////    for (int i = 0; i < 11; i++) {
////        a[s[i] - '0']++; // 有该号码数字 则对应的下标的值加1 （这个很6，存着就存着，判断有没有该号码数字就行）
////    }
////    vector<int> arr;
////    for (int i = 9; i >= 0; i--) {
////        if (a[i] != 0) {
////            arr.push_back(i); // 从大到小 把手机号码有的数字存入到vector arr中
////        }
////    }
////    vector<int> index;
////    for (int i = 0; i < 11; i++) {
////        for (int j = 0; j < arr.size(); j++) {
////            if ((s[i] - '0') == arr[j]) {
////                index.push_back(j); // 有相同则存入下标 因为arr中的元素都是不相同的 所以这里if无须其他判断
////            }
////        }
////    }
////    cout << "int[] arr = new int[]{" << arr[0];
////    for (int i = 1; i < arr.size(); i++) {
////        cout << "," << arr[i];
////    }
////    cout << "};" << endl << "int[] index = new int[]{" << index[0];
////    for (int i = 1; i < index.size(); i++) {
////        cout << "," << index[i];
////    }
////    cout << "};";
////    return 0;
////}
////
////
////
//////#include <iostream>
//////#include <algorithm>
//////#include <set>
//////#include <string>
//////using namespace std;
//////
//////int main() {
//////	string str, // 原始手机号
//////		   str2; // 不重复手机号数字
//////	set<int> s;
//////	string index="";
//////	cin >> str; 
//////	int flag1 = 1, flag2 = 1;
//////	string newStr2="", newIndex="";
//////
//////	for (int i = 0; i < str.length(); i++)
//////	{
//////		s.insert(str[i]-'0');
//////	}
//////	
//////	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//////	{
//////		// cout << *it << " ";
//////		str2 += to_string(*it);
//////	}
//////	reverse(str2.begin(), str2.end());
//////	//cout << str2<<endl;
//////
//////	for (int j = 0; j < str.length(); j++)
//////	{
//////		for (int k = 0; k < str2.length(); k++)
//////		{
//////			if (str[j] == str2[k]) {
//////				index += to_string(k);
//////			}
//////		}
//////	}
//////	//cout << index;
//////
//////	for (int i1 = 0; i1 < str2.length(); i1++)
//////	{
//////		if (i1 == str2.length()-1) {
//////			newStr2 += to_string(str2[i1]-'0');
//////			break;
//////		}
//////		newStr2 += to_string(str2[i1] - '0').append(",");
//////		flag1 = 0;
//////	}
//////	for (int j1 = 0; j1 < str.length(); j1++)
//////	{
//////		if (j1 == str.length()-1) {
//////			newIndex += to_string(index[j1] - '0');
//////			break;
//////		}
//////		newIndex += to_string(index[j1] - '0').append(",");
//////	}
//////	cout << "int[] arr = new int[]{"+ newStr2 +"};" << endl;
//////	cout << "int[] index = new int[]{" + newIndex + "};" << endl;
//////
//////
//////	// ---test---
//////	//string tep = "123";
//////	//cout << to_string(tep[1]-'0').append(",");
//////	
//////	
//////	//system("pause");
//////
//////	return 0;
//////}