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
//		arr[s[i]-'0']++; // ��Ϊ��char�� �±���int�� ������Ҫ����charתint -'0'
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
//			if ((s[i1]-'0') == v[j1]) { // ���ַ���Ҫת��int���ٽ��бȶ�
//				v2.push_back(j1); // ����ͨ����arr[11]Ҳ���� ֻ��˵vector�Ƚ�����
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
////    string s; // �ֻ�����
////    cin >> s;
////    int a[10] = { 0 }; // ��Ϊ�ֻ���������ֻ�� 0-9 �������鳤�ȶ���10������
////    for (int i = 0; i < 11; i++) {
////        a[s[i] - '0']++; // �иú������� ���Ӧ���±��ֵ��1 �������6�����žʹ��ţ��ж���û�иú������־��У�
////    }
////    vector<int> arr;
////    for (int i = 9; i >= 0; i--) {
////        if (a[i] != 0) {
////            arr.push_back(i); // �Ӵ�С ���ֻ������е����ִ��뵽vector arr��
////        }
////    }
////    vector<int> index;
////    for (int i = 0; i < 11; i++) {
////        for (int j = 0; j < arr.size(); j++) {
////            if ((s[i] - '0') == arr[j]) {
////                index.push_back(j); // ����ͬ������±� ��Ϊarr�е�Ԫ�ض��ǲ���ͬ�� ��������if���������ж�
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
//////	string str, // ԭʼ�ֻ���
//////		   str2; // ���ظ��ֻ�������
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