// 字符串替换
//#include <iostream>
//using namespace std;
//
//void test02()
//{
//	//替换
//	string str1 = "abcdefgde";
//	str1.replace(4, 3, "1111");
//
//	cout << "str1 = " << str1 << endl; // abcd1111de
//}
//
//int main() {
//	test02();
//	return 0;
//}




//set能否用[]使用数组元素 // 答案是不能
#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	cout << * s.begin();
	return 0;
}

////查看string初始值
//#include <iostream>
//using namespace std;
//
//int main() {
//	string s[10][10];
//	s[5][6] = "-";
//	s[9][9] = "*";
//	cout << s[5][5] << s[5][6] << s[9][8]<< s[9][9]; // -*  证明默认初始化是空串
//	return 0;
//}


//// 字符串替换
//#include <iostream>
//using namespace std;
//
//void test02()
//{
//	//替换
//	string str1 = "abcdefgde";
//	str1.replace(4, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//	test02();
//	return 0;
//}



// 检测vector能否用[]访问元素
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v1; //无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1[0] << " " << v1[1] << " " << v1[9];
//	return 0;
//}
//结论：可以，插入进去就是数组，而且是不定长数组，可以通过[]访问数组元素



//#include <iostream>
//#include <vector>
//using namespace std;
//
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	vector<int> v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back('a');
//	v1.push_back('I');
//	v1.push_back('II');
//	printVector(v1);
//
//	////尾删
//	//v1.pop_back();
//	//printVector(v1);
//	////插入
//	//v1.insert(v1.begin(), 100);
//	//printVector(v1);
//
//	//v1.insert(v1.begin(), 2, 1000);
//	//printVector(v1);
//
//	////删除
//	//v1.erase(v1.begin());
//	//printVector(v1);
//
//	////清空
//	//v1.erase(v1.begin(), v1.end());
//	//v1.clear();
//	//printVector(v1);
//}
//
//int main() {
//
//	test01(); // 10 20 30 40 50 97 73 18761
//
//	system("pause");
//
//	return 0;
//}