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
//        res += min(cnt[i], k); // ��Ϊ�ǰ����ϸ�����ķ�ʽ���������һ����ֻ�ܳ���K��+����PAT�Ĵ���
//    
//    printf("%d\n", res);
//    return 0;
//}
