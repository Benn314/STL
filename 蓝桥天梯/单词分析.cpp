//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
//    char c[26] = {0};
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