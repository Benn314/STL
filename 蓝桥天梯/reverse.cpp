//#include <iostream>  
//#include <string>  
//#include <algorithm>  
//using namespace std;
//
//int main()
//{
//    string s = "hello";
//
//    reverse(s.begin(), s.end());
//
//    //cout << s.append("sb") << endl;
//    cout << s+"sb" << endl;
//
//    return 0;
//}

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
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//	test02();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	//string str = "lingyunmu";
//	char cstr[50] = "lingyunmu";
//;	memset(cstr, '$', sizeof(cstr));
//	cout << cstr;
//	return 0;
//}
//int main()
//{
//	char str[50];
//
//	strcpy(str, "This is string.h library function");
//	puts(str);
//
//	memset(str, '$', 7);
//	puts(str);
//
//	return(0);
//}

//isalnum
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << isalnum('a')<<endl;
//	cout << isalnum('3') << endl;
//	cout << isalnum('$'); // 结果为false输出0，反之输出非零的数
//	return 0;
//}

//输出vector/set容器输出最后一个元素的值
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//
//int main() {
//	vector<int> v;
//	set<int> s;
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(2);
//
//	s.insert(1);
//	s.insert(4);
//	s.insert(3);
//	s.insert(2);
//
//	cout << *(--v.end()) << endl << *(--s.end());
//	return 0;
//}

// substr(a, n),
//#include <iostream>
//using namespace std;
//
//int main() {
//	string s = "lingyunmu";
//	cout<<s.substr(3, s.length() - 3);
//	return 0;
//}

//写一个大小字母转换的函数
//#include <iostream>
//using namespace std;
//
//void T(char c) {
//	if (c >= 'A' && c <= 'Z') {
//		c=tolower(c); //tolower 和 toupper不会改变字符本身
//		cout << c;
//	}else if (c >= 'a' && c <= 'z') {
//		c=toupper(c);
//		cout << c;
//	}
//	else {
//		cout << "非法字符！";
//	}
//}
//
//int main() {
//	char c;
//	cin >> c;
//	T(c);
//	return 0;
//}

// 绝对值
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << abs(a - b) << endl << abs(b - a);
//	return 0;
//}

//字符串查找
//#include <iostream>
//using namespace std;
//
//int main() {
//	string s = "lingyunmu";
//	cout<<s.find("u");
//	s.replace(1, 1, "123");
//	cout << s;
//	return 0;
//}

//字符串插入和删除
//#include <iostream>
//using namespace std;
//
//int main() {
//	string s = "lingyunmu";
//	//s.insert(1,"123");
//	//s.insert(1, 3, 'c');
//	s.erase(1, 3);
//	cout << s;
//	return 0;
//}

// vector 判断是否为空 为空返回1，不为空返回0
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v;
//	cout<<v.empty()<<endl;
//	v.push_back(2);
//	cout << v[0]<< endl<< v.empty()<<endl;
//	v.pop_back();
//	cout << v.empty();
//	return 0;
//}

// vector insert
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
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

// vector 对比 front() back() 和*v.begin() *--v.end() 是一样的
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	cout << *v.begin()<<" "<<*--v.end()<<endl; // 10 40
//	cout << v.front()<<" "<<v.back(); // 10 40
//	return 0;
//}

//#include <iostream>
//#include <set>
//using namespace std;
//
////查找和统计
//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

// STL map map中所有元素都是pair
// map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//	map<int, string> m;
//	m.insert(pair<int,string>(1, "10"));
//	m.insert(pair<int,string>(4, "40"));
//	m.insert(pair<int,string>(3, "30"));
//	m.insert(pair<int,string>(2, "20"));
//	for (map<int,string>::iterator it = m.begin(); it!=m.end(); it++)
//	{
//		//cout << it->first << " " << it->second << endl;
//		cout<<( * it).first << " " << ( * it).second << endl; //两种写法都可以
//	}
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//	return 0;
//}

// 元素未被显式初始化，编译器会自动将它们初始化为0。
//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[10] = { 0 };
//	cout << arr[9]; // 确实输出为0
//	return 0;
//}