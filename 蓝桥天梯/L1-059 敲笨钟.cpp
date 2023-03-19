//#include <iostream>
//using namespace std;
//int cnt, flag;
//string s[101];
//int main() {
//    cin >> s[0];
//    while (cin >> s[cnt]) {
//        if (s[cnt].back() == ',') {
//            // begin()和end() 都是指针 需要＋ '*' 才能获取到值 通过++ -- 移动指针
//            if ((int)s[cnt].size() >= 4 && *(s[cnt].end() - 2) == 'g' && *(s[cnt].end() - 3) == 'n' && *(s[cnt].end() - 4) == 'o') flag = 1;
//        }
//        else if (s[cnt].back() == '.') {
//            if ((int)s[cnt].size() >= 4 && flag && *(s[cnt].end() - 2) == 'g' && *(s[cnt].end() - 3) == 'n' && *(s[cnt].end() - 4) == 'o') {
//                for (int i = 0; i < cnt - 2; i++) cout << s[i] << ' '; // 倒数第二和第三不输出 最后一个输出qiao ben zhong.
//                cout << "qiao ben zhong.\n";
//            }
//            else cout << "Skipped\n";
//            cnt = flag = 0;
//            continue;
//        }
//        cnt++;
//    }
//    return 0;
//}