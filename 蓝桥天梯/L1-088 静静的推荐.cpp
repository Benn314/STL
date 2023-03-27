//#include <iostream>
//using namespace std;
// 
//const int N = 300;
// 
//int cnt[N];
//int n, k, s;
// 
//int main()
//{
//    scanf("%d%d%d", &n, &k, &s);
// 
//    int res =  0;
//    while (n-- )
//    {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        if (a >= 175)
//        {
//            if (b >= s) res ++;
//            else cnt[a] ++;
//        }
//    }
//    
//    for (int i = 175; i <= 290; i++)
//        res += min(cnt[i], k); // 因为是按照严格递增的方式，所以最多一个数只能出现K次+额外PAT的次数
//    
//    printf("%d\n", res);
//    return 0;
//}
