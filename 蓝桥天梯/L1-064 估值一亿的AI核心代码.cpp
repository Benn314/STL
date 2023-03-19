//// 用正则表达式
//#include <iostream>
//#include <string>
//#include <regex>
//using namespace std;
//string s;
//int main() {
//    getline(cin, s);
//    while (getline(cin, s)) {
//        cout << s << '\n' << "AI: ";
//        s = regex_replace(s, regex(R"(\s+)"), " "); // 将若干个空格转换为一个空格
//        s = regex_replace(s, regex(R"(^\s+|\s+$|\s+(?=\W))"), "");
//        s = regex_replace(s, regex(R"(\bI\b)"), "mark_mark");
//        for (int i = 0; i < (int)s.size(); i++) if (s[i] != 'I') s[i] = tolower(s[i]);
//        s = regex_replace(s, regex(R"(\bcan you\b)"), "I can");
//        s = regex_replace(s, regex(R"(\bcould you\b)"), "I could");
//        s = regex_replace(s, regex(R"(mark_mark|\bme\b)"), "you");
//        s = regex_replace(s, regex(R"(\?)"), "!");
//        cout << s << '\n';
//    }
//    return 0;
//}
//
//
//
//
//// 错误 做不出来
////#include <iostream>
////#include <string>
////using namespace std;
////
////int main() {
////	string author;
////	int N,k=0;
////	cin >> N;
////	cin.get();
////	for (int i = 0; i < N; i++)
////	{
////		getline(cin, author);
////
////		while (author.length() < k) {
////			if (to_string(author[k]) == "," && to_string(author[k - 1]) == " ") {
////				author.replace(k-1, 1, "");
////			}
////			//author.replace(author.find("Can you", 0), 1, "I can");
////			//author.replace(author.find("Could you", 0), 1, "I could");
////			author.replace(author.find("I", 0), 1, "you");
////			//author.replace(author.find("me", 0), 1, "you");
////			author.replace(author.find("?", 0), 1, "!");
////			k++;
////		}
////		cout << "AI: " << author << endl;
////	}
////
////
////
////	return 0;
////}