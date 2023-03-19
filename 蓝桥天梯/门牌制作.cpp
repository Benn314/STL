//#include <iostream>
//#include <string>
////#include <typeinfo>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	// 这道题的两个知识点，stoi为什么用不了 √，string有没有方法可以查找单字符串里某字符出现的所有次数（回答：并没有）
//	string str;
//	int count=0;
//	for (int i = 1; i < 2021; i++)
//	{
//		int tmp = i;
//		str = to_string(tmp);
//		for (int j = 0; j < str.length(); j++)
//		{
//			if (str[j] == '2') {
//				count++;
//			}
//			//if (stoi(to_string(str[j])) == '2') { //单纯写stoi(str[j])不行，里面是char，需要再用to_string转成string直接用string(str[j])强制转换也不行
//			//	count++;
//			//}
//			//cout << str[j]<<endl;
//			// 查看变量的数据类型 typeid(str[j]).name()
//			//cout << typeid(str[j]).name() << endl; //char 可以不用+头文件 #include <typeinfo>
//		}
//	}
//	
//	cout << count;
//	return 0;
//}