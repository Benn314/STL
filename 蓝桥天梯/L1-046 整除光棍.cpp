//// ģ����� ��ֱ��һ����λ���result ������ % == 0 ֮ǰ �Ѵ�һλλ��� ��������Ų��ᳬʱ 20��
//#include <iostream>
//using namespace std;
//int main() {
//    int n, ans = 1, cnt = 1;
//    cin >> n;
//    while (ans < n) {
//        ans = ans * 10 + 1;
//        cnt++;
//    }
//    while (1) {
//        cout << ans / n;
//        if (ans % n == 0) break;
//        ans = (ans % n) * 10 + 1; // ���Ĺؼ����
//        cnt++;
//    }
//    cout << ' ' << cnt;
//    return 0;
//}
//
//
//// �ҵķ������г�ʱ 3��
////#include <iostream>
////using namespace std;
////
////int main() {
////	// cout << 3584229390681 * 31; ���Եó�����
////	int x, target=1,count=1,result=0;
////	cin >> x;
////	if (x % 10 != 5) {
////		while (target % x != 0) {
////			target = target * 10 + 1;
////			count++;
////		}
////		result = target / x;
////		cout << result << " " << count;
////	}
////	
////
////
////	return 0;
////}
//
//// �ҵķ�������������� ������ longlong target += power(10,count)+ 1  �����ܵø�15��
////#include<bits/stdc++.h>
////using namespace std;
////int main() {
////    int N;
////    cin >> N;
////    long long i = 1;
////    int length = 1;
////    while (i % N != 0) {
////        i += pow(10, length);
////        length++;
////    }
////    cout << i / N << ' ' << length << endl;
////    return 0;
////}
