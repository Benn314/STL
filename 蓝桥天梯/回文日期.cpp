//#include <iostream>
//#include <string>
//using namespace std;
//
//// ��д�����жϺ�����һ������Ƿ�Ϊ���꣬һ������Ƿ�Ϊ��ȷ���ڣ����Լ�����С��������ʱ��
//// д��������������һ��Ҫ���ճ�ʶд�ԣ�ֻ��Ϊ�˼ӿ������ж��ٶȣ���ʡ����ʱ��
//// ���ԣ���ʶһ��Ҫд�ԣ���Ȼ���ڸ�ʽ���˴�Ҳ�ʹ���
//bool isRyear(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//		return true;
//	}
//	return false;
//}
//
//bool check(int year, int month, int day) {
//	if (month >= 13 || day>31 || month == 0) {
//		return false;
//	}
//	if (month == 2) {
//		if (isRyear(year) && day>29 || !isRyear(year) && day>28) {
//			return false;
//		}
//	}
//	if (month == 4 || month == 6 || month == 9 || month == 11) {
//		if (day > 30) {
//			return false;
//		}
//	}
//	return true;
//	
//}
//
//int main()
//{
//	int year, month, day;//Ҫ�ж��ǲ��ǺϷ����ں��ǲ�������
//	//int i = 20200202;
//	
//	//cout << year << endl << month << endl << day;
//	// ���ڴ��������Ĵ���
//	int num;
//	string str,str2;
//	cin >> num;
//	str = to_string(num);
//	//cout << str;
//	for (int i = num+1; i < 89991232; i++) {
//		year = i / 10000;
//		month = (i % 10000) / 100;
//		day = i % 100;
//		if (!check(year, month, day)) {
//			continue;
//		}
//		int a = i / 10000000;
//		int b = (i / 1000000) % 10;
//		int c = (i / 100000) % 10;
//		int d = (i / 10000) % 10;
//		int e = (i / 1000) % 10;
//		int f = (i / 100) % 10;
//		int g = (i / 10) % 10;
//		int h = i % 10;
//		/*str = to_string(i);
//		if (str[0] == str[7] && str[1] == str[6] && str[2] == str[5] && str[3] == str[4]) {
//			cout << str<< endl;
//			break;
//		}*/
//		if (a == h && b == g && c == f && d == e) {
//			cout << i << endl;
//			break;
//		}
//	}
//
//	for (int j = num+1; j < 89991232; j++) {
//		year = j / 10000;
//		month = (j % 10000) / 100;
//		day = j % 100;
//		if (!check(year, month, day)) {
//			continue;
//		}
//		int a = j / 10000000;
//		int b = (j / 1000000) % 10;
//		int c = (j / 100000) % 10;
//		int d = (j / 10000) % 10;
//		int e = (j / 1000) % 10;
//		int f = (j / 100) % 10;
//		int g = (j / 10) % 10;
//		int h = j % 10;
//		/*str2 = to_string(j);
//		if (str2[0] == str2[7] == str2[2] == str2[5] && str2[1] == str2[3] == str2[4] == str2[6]) {
//			cout << str2;
//			break;
//		}*/
//		if (a == h && b == g && c == f && d == e && a == c && b == d) {
//			cout << j;
//			break;
//		}
//	}
//	return 0;
//}