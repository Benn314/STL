//// 模拟除法 不直接一步到位求出result 而是在 % == 0 之前 把答案一位位输出 这样运算才不会超时 20分
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
//        ans = (ans % n) * 10 + 1; // 核心关键语句
//        cnt++;
//    }
//    cout << ' ' << cnt;
//    return 0;
//}
//
//
//// 我的方法运行超时 3分
////#include <iostream>
////using namespace std;
////
////int main() {
////	// cout << 3584229390681 * 31; 可以得出结论
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
//// 我的方法不如下面这个 建议用 longlong target += power(10,count)+ 1  起码能得个15分
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
