//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    char c[26] = {0}; //只初始了第一个值为0，其实默认编译器也会给未赋值的变量初始化为0
//    string str;
//    getline(cin,str);
//    for (int i = 0; i < str.length(); i++) {
//        int temp = str[i] - 'a';
//        c[temp]++;
//    }
//
//    int max = -1;
//    char tmp;
//    for (int j = 0; j < 26; j++) {
//        if (max < c[j]) {
//            max = c[j];
//            tmp = j + 'a';
//        }
//    }
//    cout << tmp << endl << max;
//    return 0;
//}