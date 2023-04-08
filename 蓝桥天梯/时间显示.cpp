//#include <iostream>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	long long int h; // ll h
//	cin >> h;
//	int hh, mm, ss;
//	h = h % (24 * 60 * 60 * 1000);//s
//	hh = h / (60 * 60 * 1000) % 24;
//	mm = h / (60 * 1000) % 60;
//	ss = h / (1000) % 60;
//	printf("%02d:%02d:%02d\n", hh, mm, ss); //%02d可以用0填充
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	// 一秒==一千毫秒 一个小时3600s，一天就是24*3600
//	//cout << 24 * 3600 * 1000; //一天为86400000 ms
//	long long  N;
//	int day = 24 * 3600* 1000;
//	cin >> N;
//	int yu = N % day;
//	int hour = yu / (60 * 60 * 1000) % 24;
//	int min = yu / (60 * 1000) % 60;
//	int second = yu / (1000) % 60;
//
//	string s_hour, s_min, s_second;
//	if (hour < 10) {
//		s_hour = "0" + to_string(hour);
//	}
//	else {
//		s_hour = to_string(hour);
//	}
//
//	if (min < 10) {
//		s_min = "0" + to_string(min);
//	}
//	else {
//		s_min = to_string(min);
//	}
//
//	if (second < 10) {
//		s_second = "0" + to_string(second);
//	}
//	else {
//		s_second = to_string(second);
//	}
//
//	cout << s_hour << ":" << s_min << ":" << s_second;
//	return 0;
//}