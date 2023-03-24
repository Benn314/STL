//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    if (a < b) {
//        swap(a, b);
//    }
//    if (a % b == 0) {
//        return b;
//    }
//    else {
//        return gcd(b, a % b);
//    }
//}
//
//int main()
//{
//    // 请在此输入您的代码
//    int count = 0;
//    for (int i = 1; i <= 2020; i++) {
//        for (int j = 1; j <= 2020; j++) {
//            if (gcd(i, j) == 1) {
//                count++;
//            }
//        }
//    }
//
//    cout << count;
//
//    return 0;
//}
//
//
////#include <iostream>
////using namespace std;
////
//////欧几里得算法求最大公约数
////int gcd(int a, int b)
////{
////    if (a < b)
////    {
////        swap(a, b);
////    }
////    if (a % b == 0)
////    {
////        return b;
////    }
////    return gcd(b, a % b);
////}
////
////int main()
////{
////    int a, b, i = 0;
////    for (a = 1; a <= 2020; a++)
////    {
////        for (b = 1; b <= 2020; b++)
////        {
////            if (gcd(a, b) == 1)
////            {
////                i++;
////            }
////        }
////    }
////
////    cout << i << endl;
////
////    return 0;
////}